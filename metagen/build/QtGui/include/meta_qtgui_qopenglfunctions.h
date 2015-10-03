// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLFUNCTIONS_H
#define CPGF_META_QTGUI_QOPENGLFUNCTIONS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qopenglfunctions(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtGui_15")
    ;
}


template <typename D>
void buildMetaClass_QOpenGLFunctions(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QOpenGLContext *)>();
    _d.CPGF_MD_TEMPLATE _method("openGLFeatures", &D::ClassType::openGLFeatures);
    _d.CPGF_MD_TEMPLATE _method("hasOpenGLFeature", &D::ClassType::hasOpenGLFeature);
    _d.CPGF_MD_TEMPLATE _method("initializeOpenGLFunctions", &D::ClassType::initializeOpenGLFunctions);
    _d.CPGF_MD_TEMPLATE _method("glBindTexture", &D::ClassType::glBindTexture);
    _d.CPGF_MD_TEMPLATE _method("glBlendFunc", &D::ClassType::glBlendFunc);
    _d.CPGF_MD_TEMPLATE _method("glClear", &D::ClassType::glClear);
    _d.CPGF_MD_TEMPLATE _method("glClearColor", &D::ClassType::glClearColor);
    _d.CPGF_MD_TEMPLATE _method("glClearStencil", &D::ClassType::glClearStencil);
    _d.CPGF_MD_TEMPLATE _method("glColorMask", &D::ClassType::glColorMask);
    _d.CPGF_MD_TEMPLATE _method("glCopyTexImage2D", &D::ClassType::glCopyTexImage2D);
    _d.CPGF_MD_TEMPLATE _method("glCopyTexSubImage2D", &D::ClassType::glCopyTexSubImage2D);
    _d.CPGF_MD_TEMPLATE _method("glCullFace", &D::ClassType::glCullFace);
    _d.CPGF_MD_TEMPLATE _method("glDeleteTextures", &D::ClassType::glDeleteTextures);
    _d.CPGF_MD_TEMPLATE _method("glDepthFunc", &D::ClassType::glDepthFunc);
    _d.CPGF_MD_TEMPLATE _method("glDepthMask", &D::ClassType::glDepthMask);
    _d.CPGF_MD_TEMPLATE _method("glDisable", &D::ClassType::glDisable);
    _d.CPGF_MD_TEMPLATE _method("glDrawArrays", &D::ClassType::glDrawArrays);
    _d.CPGF_MD_TEMPLATE _method("glDrawElements", &D::ClassType::glDrawElements);
    _d.CPGF_MD_TEMPLATE _method("glEnable", &D::ClassType::glEnable);
    _d.CPGF_MD_TEMPLATE _method("glFinish", &D::ClassType::glFinish);
    _d.CPGF_MD_TEMPLATE _method("glFlush", &D::ClassType::glFlush);
    _d.CPGF_MD_TEMPLATE _method("glFrontFace", &D::ClassType::glFrontFace);
    _d.CPGF_MD_TEMPLATE _method("glGenTextures", &D::ClassType::glGenTextures);
    _d.CPGF_MD_TEMPLATE _method("glGetBooleanv", &D::ClassType::glGetBooleanv);
    _d.CPGF_MD_TEMPLATE _method("glGetError", &D::ClassType::glGetError);
    _d.CPGF_MD_TEMPLATE _method("glGetFloatv", &D::ClassType::glGetFloatv);
    _d.CPGF_MD_TEMPLATE _method("glGetIntegerv", &D::ClassType::glGetIntegerv);
    _d.CPGF_MD_TEMPLATE _method("glGetString", &D::ClassType::glGetString);
    _d.CPGF_MD_TEMPLATE _method("glGetTexParameterfv", &D::ClassType::glGetTexParameterfv);
    _d.CPGF_MD_TEMPLATE _method("glGetTexParameteriv", &D::ClassType::glGetTexParameteriv);
    _d.CPGF_MD_TEMPLATE _method("glHint", &D::ClassType::glHint);
    _d.CPGF_MD_TEMPLATE _method("glIsEnabled", &D::ClassType::glIsEnabled);
    _d.CPGF_MD_TEMPLATE _method("glIsTexture", &D::ClassType::glIsTexture);
    _d.CPGF_MD_TEMPLATE _method("glLineWidth", &D::ClassType::glLineWidth);
    _d.CPGF_MD_TEMPLATE _method("glPixelStorei", &D::ClassType::glPixelStorei);
    _d.CPGF_MD_TEMPLATE _method("glPolygonOffset", &D::ClassType::glPolygonOffset);
    _d.CPGF_MD_TEMPLATE _method("glReadPixels", &D::ClassType::glReadPixels);
    _d.CPGF_MD_TEMPLATE _method("glScissor", &D::ClassType::glScissor);
    _d.CPGF_MD_TEMPLATE _method("glStencilFunc", &D::ClassType::glStencilFunc);
    _d.CPGF_MD_TEMPLATE _method("glStencilMask", &D::ClassType::glStencilMask);
    _d.CPGF_MD_TEMPLATE _method("glStencilOp", &D::ClassType::glStencilOp);
    _d.CPGF_MD_TEMPLATE _method("glTexImage2D", &D::ClassType::glTexImage2D);
    _d.CPGF_MD_TEMPLATE _method("glTexParameterf", &D::ClassType::glTexParameterf);
    _d.CPGF_MD_TEMPLATE _method("glTexParameterfv", &D::ClassType::glTexParameterfv);
    _d.CPGF_MD_TEMPLATE _method("glTexParameteri", &D::ClassType::glTexParameteri);
    _d.CPGF_MD_TEMPLATE _method("glTexParameteriv", &D::ClassType::glTexParameteriv);
    _d.CPGF_MD_TEMPLATE _method("glTexSubImage2D", &D::ClassType::glTexSubImage2D);
    _d.CPGF_MD_TEMPLATE _method("glViewport", &D::ClassType::glViewport);
    _d.CPGF_MD_TEMPLATE _method("glActiveTexture", &D::ClassType::glActiveTexture);
    _d.CPGF_MD_TEMPLATE _method("glAttachShader", &D::ClassType::glAttachShader);
    _d.CPGF_MD_TEMPLATE _method("glBindAttribLocation", &D::ClassType::glBindAttribLocation);
    _d.CPGF_MD_TEMPLATE _method("glBindBuffer", &D::ClassType::glBindBuffer);
    _d.CPGF_MD_TEMPLATE _method("glBindFramebuffer", &D::ClassType::glBindFramebuffer);
    _d.CPGF_MD_TEMPLATE _method("glBindRenderbuffer", &D::ClassType::glBindRenderbuffer);
    _d.CPGF_MD_TEMPLATE _method("glBlendColor", &D::ClassType::glBlendColor);
    _d.CPGF_MD_TEMPLATE _method("glBlendEquation", &D::ClassType::glBlendEquation);
    _d.CPGF_MD_TEMPLATE _method("glBlendEquationSeparate", &D::ClassType::glBlendEquationSeparate);
    _d.CPGF_MD_TEMPLATE _method("glBlendFuncSeparate", &D::ClassType::glBlendFuncSeparate);
    _d.CPGF_MD_TEMPLATE _method("glBufferData", &D::ClassType::glBufferData);
    _d.CPGF_MD_TEMPLATE _method("glBufferSubData", &D::ClassType::glBufferSubData);
    _d.CPGF_MD_TEMPLATE _method("glCheckFramebufferStatus", &D::ClassType::glCheckFramebufferStatus);
    _d.CPGF_MD_TEMPLATE _method("glClearDepthf", &D::ClassType::glClearDepthf);
    _d.CPGF_MD_TEMPLATE _method("glCompileShader", &D::ClassType::glCompileShader);
    _d.CPGF_MD_TEMPLATE _method("glCompressedTexImage2D", &D::ClassType::glCompressedTexImage2D);
    _d.CPGF_MD_TEMPLATE _method("glCompressedTexSubImage2D", &D::ClassType::glCompressedTexSubImage2D);
    _d.CPGF_MD_TEMPLATE _method("glCreateProgram", &D::ClassType::glCreateProgram);
    _d.CPGF_MD_TEMPLATE _method("glCreateShader", &D::ClassType::glCreateShader);
    _d.CPGF_MD_TEMPLATE _method("glDeleteBuffers", &D::ClassType::glDeleteBuffers);
    _d.CPGF_MD_TEMPLATE _method("glDeleteFramebuffers", &D::ClassType::glDeleteFramebuffers);
    _d.CPGF_MD_TEMPLATE _method("glDeleteProgram", &D::ClassType::glDeleteProgram);
    _d.CPGF_MD_TEMPLATE _method("glDeleteRenderbuffers", &D::ClassType::glDeleteRenderbuffers);
    _d.CPGF_MD_TEMPLATE _method("glDeleteShader", &D::ClassType::glDeleteShader);
    _d.CPGF_MD_TEMPLATE _method("glDepthRangef", &D::ClassType::glDepthRangef);
    _d.CPGF_MD_TEMPLATE _method("glDetachShader", &D::ClassType::glDetachShader);
    _d.CPGF_MD_TEMPLATE _method("glDisableVertexAttribArray", &D::ClassType::glDisableVertexAttribArray);
    _d.CPGF_MD_TEMPLATE _method("glEnableVertexAttribArray", &D::ClassType::glEnableVertexAttribArray);
    _d.CPGF_MD_TEMPLATE _method("glFramebufferRenderbuffer", &D::ClassType::glFramebufferRenderbuffer);
    _d.CPGF_MD_TEMPLATE _method("glFramebufferTexture2D", &D::ClassType::glFramebufferTexture2D);
    _d.CPGF_MD_TEMPLATE _method("glGenBuffers", &D::ClassType::glGenBuffers);
    _d.CPGF_MD_TEMPLATE _method("glGenerateMipmap", &D::ClassType::glGenerateMipmap);
    _d.CPGF_MD_TEMPLATE _method("glGenFramebuffers", &D::ClassType::glGenFramebuffers);
    _d.CPGF_MD_TEMPLATE _method("glGenRenderbuffers", &D::ClassType::glGenRenderbuffers);
    _d.CPGF_MD_TEMPLATE _method("glGetActiveAttrib", &D::ClassType::glGetActiveAttrib);
    _d.CPGF_MD_TEMPLATE _method("glGetActiveUniform", &D::ClassType::glGetActiveUniform);
    _d.CPGF_MD_TEMPLATE _method("glGetAttachedShaders", &D::ClassType::glGetAttachedShaders);
    _d.CPGF_MD_TEMPLATE _method("glGetAttribLocation", &D::ClassType::glGetAttribLocation);
    _d.CPGF_MD_TEMPLATE _method("glGetBufferParameteriv", &D::ClassType::glGetBufferParameteriv);
    _d.CPGF_MD_TEMPLATE _method("glGetFramebufferAttachmentParameteriv", &D::ClassType::glGetFramebufferAttachmentParameteriv);
    _d.CPGF_MD_TEMPLATE _method("glGetProgramiv", &D::ClassType::glGetProgramiv);
    _d.CPGF_MD_TEMPLATE _method("glGetProgramInfoLog", &D::ClassType::glGetProgramInfoLog);
    _d.CPGF_MD_TEMPLATE _method("glGetRenderbufferParameteriv", &D::ClassType::glGetRenderbufferParameteriv);
    _d.CPGF_MD_TEMPLATE _method("glGetShaderiv", &D::ClassType::glGetShaderiv);
    _d.CPGF_MD_TEMPLATE _method("glGetShaderInfoLog", &D::ClassType::glGetShaderInfoLog);
    _d.CPGF_MD_TEMPLATE _method("glGetShaderPrecisionFormat", &D::ClassType::glGetShaderPrecisionFormat);
    _d.CPGF_MD_TEMPLATE _method("glGetShaderSource", &D::ClassType::glGetShaderSource);
    _d.CPGF_MD_TEMPLATE _method("glGetUniformfv", &D::ClassType::glGetUniformfv);
    _d.CPGF_MD_TEMPLATE _method("glGetUniformiv", &D::ClassType::glGetUniformiv);
    _d.CPGF_MD_TEMPLATE _method("glGetUniformLocation", &D::ClassType::glGetUniformLocation);
    _d.CPGF_MD_TEMPLATE _method("glGetVertexAttribfv", &D::ClassType::glGetVertexAttribfv);
    _d.CPGF_MD_TEMPLATE _method("glGetVertexAttribiv", &D::ClassType::glGetVertexAttribiv);
    _d.CPGF_MD_TEMPLATE _method("glGetVertexAttribPointerv", &D::ClassType::glGetVertexAttribPointerv);
    _d.CPGF_MD_TEMPLATE _method("glIsBuffer", &D::ClassType::glIsBuffer);
    _d.CPGF_MD_TEMPLATE _method("glIsFramebuffer", &D::ClassType::glIsFramebuffer);
    _d.CPGF_MD_TEMPLATE _method("glIsProgram", &D::ClassType::glIsProgram);
    _d.CPGF_MD_TEMPLATE _method("glIsRenderbuffer", &D::ClassType::glIsRenderbuffer);
    _d.CPGF_MD_TEMPLATE _method("glIsShader", &D::ClassType::glIsShader);
    _d.CPGF_MD_TEMPLATE _method("glLinkProgram", &D::ClassType::glLinkProgram);
    _d.CPGF_MD_TEMPLATE _method("glReleaseShaderCompiler", &D::ClassType::glReleaseShaderCompiler);
    _d.CPGF_MD_TEMPLATE _method("glRenderbufferStorage", &D::ClassType::glRenderbufferStorage);
    _d.CPGF_MD_TEMPLATE _method("glSampleCoverage", &D::ClassType::glSampleCoverage);
    _d.CPGF_MD_TEMPLATE _method("glShaderBinary", &D::ClassType::glShaderBinary);
    _d.CPGF_MD_TEMPLATE _method("glShaderSource", &D::ClassType::glShaderSource);
    _d.CPGF_MD_TEMPLATE _method("glStencilFuncSeparate", &D::ClassType::glStencilFuncSeparate);
    _d.CPGF_MD_TEMPLATE _method("glStencilMaskSeparate", &D::ClassType::glStencilMaskSeparate);
    _d.CPGF_MD_TEMPLATE _method("glStencilOpSeparate", &D::ClassType::glStencilOpSeparate);
    _d.CPGF_MD_TEMPLATE _method("glUniform1f", &D::ClassType::glUniform1f);
    _d.CPGF_MD_TEMPLATE _method("glUniform1fv", &D::ClassType::glUniform1fv);
    _d.CPGF_MD_TEMPLATE _method("glUniform1i", &D::ClassType::glUniform1i);
    _d.CPGF_MD_TEMPLATE _method("glUniform1iv", &D::ClassType::glUniform1iv);
    _d.CPGF_MD_TEMPLATE _method("glUniform2f", &D::ClassType::glUniform2f);
    _d.CPGF_MD_TEMPLATE _method("glUniform2fv", &D::ClassType::glUniform2fv);
    _d.CPGF_MD_TEMPLATE _method("glUniform2i", &D::ClassType::glUniform2i);
    _d.CPGF_MD_TEMPLATE _method("glUniform2iv", &D::ClassType::glUniform2iv);
    _d.CPGF_MD_TEMPLATE _method("glUniform3f", &D::ClassType::glUniform3f);
    _d.CPGF_MD_TEMPLATE _method("glUniform3fv", &D::ClassType::glUniform3fv);
    _d.CPGF_MD_TEMPLATE _method("glUniform3i", &D::ClassType::glUniform3i);
    _d.CPGF_MD_TEMPLATE _method("glUniform3iv", &D::ClassType::glUniform3iv);
    _d.CPGF_MD_TEMPLATE _method("glUniform4f", &D::ClassType::glUniform4f);
    _d.CPGF_MD_TEMPLATE _method("glUniform4fv", &D::ClassType::glUniform4fv);
    _d.CPGF_MD_TEMPLATE _method("glUniform4i", &D::ClassType::glUniform4i);
    _d.CPGF_MD_TEMPLATE _method("glUniform4iv", &D::ClassType::glUniform4iv);
    _d.CPGF_MD_TEMPLATE _method("glUniformMatrix2fv", &D::ClassType::glUniformMatrix2fv);
    _d.CPGF_MD_TEMPLATE _method("glUniformMatrix3fv", &D::ClassType::glUniformMatrix3fv);
    _d.CPGF_MD_TEMPLATE _method("glUniformMatrix4fv", &D::ClassType::glUniformMatrix4fv);
    _d.CPGF_MD_TEMPLATE _method("glUseProgram", &D::ClassType::glUseProgram);
    _d.CPGF_MD_TEMPLATE _method("glValidateProgram", &D::ClassType::glValidateProgram);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib1f", &D::ClassType::glVertexAttrib1f);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib1fv", &D::ClassType::glVertexAttrib1fv);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib2f", &D::ClassType::glVertexAttrib2f);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib2fv", &D::ClassType::glVertexAttrib2fv);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib3f", &D::ClassType::glVertexAttrib3f);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib3fv", &D::ClassType::glVertexAttrib3fv);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib4f", &D::ClassType::glVertexAttrib4f);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttrib4fv", &D::ClassType::glVertexAttrib4fv);
    _d.CPGF_MD_TEMPLATE _method("glVertexAttribPointer", &D::ClassType::glVertexAttribPointer);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OpenGLFeature>("OpenGLFeature")
        ._element("Multitexture", D::ClassType::Multitexture)
        ._element("Shaders", D::ClassType::Shaders)
        ._element("Buffers", D::ClassType::Buffers)
        ._element("Framebuffers", D::ClassType::Framebuffers)
        ._element("BlendColor", D::ClassType::BlendColor)
        ._element("BlendEquation", D::ClassType::BlendEquation)
        ._element("BlendEquationSeparate", D::ClassType::BlendEquationSeparate)
        ._element("BlendFuncSeparate", D::ClassType::BlendFuncSeparate)
        ._element("BlendSubtract", D::ClassType::BlendSubtract)
        ._element("CompressedTextures", D::ClassType::CompressedTextures)
        ._element("Multisample", D::ClassType::Multisample)
        ._element("StencilSeparate", D::ClassType::StencilSeparate)
        ._element("NPOTTextures", D::ClassType::NPOTTextures)
        ._element("NPOTTextureRepeat", D::ClassType::NPOTTextureRepeat)
        ._element("FixedFunctionPipeline", D::ClassType::FixedFunctionPipeline)
        ._element("TextureRGFormats", D::ClassType::TextureRGFormats)
    ;
    {
        GDefineMetaClass<QFlags<typename QOpenGLFunctions::OpenGLFeature > > _t_d = GDefineMetaClass<QFlags<typename QOpenGLFunctions::OpenGLFeature > >::lazyDeclare("OpenGLFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QOpenGLFunctions::OpenGLFeature > >, typename QOpenGLFunctions::OpenGLFeature >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
