// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_GraphicDeviceDefinitionError_HeaderFile
#define _Aspect_GraphicDeviceDefinitionError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_OutOfRange.hxx>
#include <Handle_Aspect_GraphicDeviceDefinitionError.hxx>

#if !defined No_Exception && !defined No_Aspect_GraphicDeviceDefinitionError
  #define Aspect_GraphicDeviceDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Aspect_GraphicDeviceDefinitionError::Raise(MESSAGE);
#else
  #define Aspect_GraphicDeviceDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Aspect_GraphicDeviceDefinitionError, Standard_OutOfRange)

#endif // _Aspect_GraphicDeviceDefinitionError_HeaderFile
