/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


#ifndef __GERRORCODE_H
#define __GERRORCODE_H


namespace cpgf {


extern int Error_None;

extern int Error_Variant_Begin;
extern int Error_Variant_FailCast;
extern int Error_Variant_FailCopyObject;
extern int Error_Variant_CantReferenceToTemp;
extern int Error_Variant_FailAdjustTypeSize;
extern int Error_Variant_End;

extern int Error_Meta_Begin;
extern int Error_Meta_ParamOutOfIndex;
extern int Error_Meta_ReadDenied;
extern int Error_Meta_WriteDenied;
extern int Error_Meta_CannotInitAbstractClass;
extern int Error_Meta_NoDefaultexternructor;
extern int Error_Meta_NoCopyConstructor;
extern int Error_Meta_NotUnaryOperator;
extern int Error_Meta_NotBinaryOperator;
extern int Error_Meta_NotFunctorOperator;
extern int Error_Meta_WrongArity;
extern int Error_Meta_End;

extern int Error_ScriptBinding_Begin;
extern int Error_ScriptBinding_InternalError_WrongFunctor;
extern int Error_ScriptBinding_NotSupportedOperator;
extern int Error_ScriptBinding_FailVariantToScript;
extern int Error_ScriptBinding_CantFindMatchedMethod;
extern int Error_ScriptBinding_FailConstructObject;
extern int Error_ScriptBinding_CantFindEnumKey;
extern int Error_ScriptBinding_CantAssignToEnumMethodClass;
extern int Error_ScriptBinding_ScriptMethodParamMismatch;
extern int Error_ScriptBinding_CantReturnMultipleValue;
extern int Error_ScriptBinding_CantCallNonfunction;
extern int Error_ScriptBinding_CantBindFundamental;
extern int Error_ScriptBinding_ScriptFunctionReturnError;
extern int Error_ScriptBinding_CantWriteToConstObject;
extern int Error_ScriptBinding_CallMethodWithTooManyParameters;
extern int Error_ScriptBinding_AccessMemberWithWrongObject;
extern int Error_ScriptBinding_CantBindRaw;
extern int Error_ScriptBinding_NoContext;
extern int Error_ScriptBinding_CantFindMatchedOperator;
extern int Error_ScriptBinding_End;

extern int Error_Serialization_Begin;
extern int Error_Serialization_TypeMismatch;
extern int Error_Serialization_CannotFindObjectType;
extern int Error_Serialization_MissingMetaClass;
extern int Error_Serialization_UnknownType;
extern int Error_Serialization_InvalidStorage;
extern int Error_Serialization_End;


} // namespace cpgf



#endif

