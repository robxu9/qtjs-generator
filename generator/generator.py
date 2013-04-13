#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
import os
import subprocess
import re
from clang.cindex import Index
import ast_info
import class_gen
import config
from pprint import pprint

MYDIR = os.path.dirname(os.path.realpath(__file__))

if len(sys.argv) < 2:
    sys.exit('Usage: %s <Qt include directory>' % sys.argv[0])

if not os.path.exists(sys.argv[1]):
    sys.exit('ERROR: the path specified (%s) was not found!' % sys.argv[1])

rootdir = sys.argv[1]
clangIdx = Index.create()


def generate_module_files(module, classList):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp')
    f = open(os.path.join(targetDir, module+'.pri'), 'w')
    f.write("SOURCES += $$PWD/"+ module+'.cpp ' + " ".join(map(lambda c: "$$PWD/"+module+"/"+class_gen.file_name_from_class(c), classList)) + "\n")
    f.close()

    f = open(os.path.join(targetDir, module+'.cpp'), 'w')
    f.write("#include <qtjs_bindings/shared.h>\n\n")
    f.write("namespace qtjs_binder {\n\n")
    f.write("\n".join(map(lambda c: "void bind_"+module+"_"+class_gen.sanitize_name(c)+"(vu8::Module &module);", classList))+"\n\n")
    f.write("void bind_"+module+"(vu8::Module &module) {\n")
    f.write("\n".join(map(lambda c: "    bind_"+module+"_"+class_gen.sanitize_name(c)+"(module);", classList))+"\n")
    f.write("}\n\n")
    f.write("}\n")
    f.close()


def process_file(path, module, skipClasses):
    tu = clangIdx.parse(None, ['-x', 'c++', path, '-I', rootdir])

    if not tu:
        raise 'unable to load input'

    if len(tu.diagnostics):
        pprint(('diags', map(ast_info.get_diag_info, tu.diagnostics)))

    added_classes = []
    for (classname, c, classfile) in ast_info.retrieve_classes(tu.cursor):
        if classfile.startswith(os.path.join(rootdir, module)) and not config.should_skip_class(classname) and classname not in skipClasses:
            class_gen.generate_class(classname, c, classfile, module, rootdir)
            skipClasses.append(classname)
            added_classes.append(classname)
            print "generated ", classname

    return added_classes

def generate_index_file(dir, findex_fn):
    incl_contents = ''
    for file in os.listdir(dir):
        path = os.path.join(dir, file)
        if os.path.isfile(path) and not re.match(r'.*\..*', file):
            print "adding ", module, file
            incl_contents += "#include <"+module+"/"+file+">\n";
    findex = open(findex_fn, "w");
    findex.write(incl_contents);
    findex.close()

class_list = []
for (module, dir) in [ \
        (module, dir) for (module, dir) in [ \
            (module, os.path.join(rootdir, module)) for module in os.listdir(rootdir) \
        ] if not module in [".",".."] and os.path.isdir(dir) \
    ]:
    if not module in ["QtCore", "QtWidgets"]:
        continue

    print "top level dir: ", module,  dir
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp')
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)
    findex_fn = os.path.join(targetDir, '__tmp_'+module+'.h')
    if not os.path.exists(findex_fn):
        generate_index_file(dir, findex_fn)

    added_classes = process_file(findex_fn, module, class_list)
    class_list.extend(added_classes)
    sys.stdout.flush()
    if len(added_classes):
        generate_module_files(module, added_classes)
    sys.stdout.flush()

