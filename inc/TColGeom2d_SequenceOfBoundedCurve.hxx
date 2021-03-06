// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_SequenceOfBoundedCurve_HeaderFile
#define _TColGeom2d_SequenceOfBoundedCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Geom2d_BoundedCurve.hxx>
#include <Handle_TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom2d_BoundedCurve;
class TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve;



class TColGeom2d_SequenceOfBoundedCurve  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColGeom2d_SequenceOfBoundedCurve();
  
  Standard_EXPORT TColGeom2d_SequenceOfBoundedCurve(const TColGeom2d_SequenceOfBoundedCurve& Other);
  
  Standard_EXPORT   void Clear() ;
~TColGeom2d_SequenceOfBoundedCurve()
{
  Clear();
}
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfBoundedCurve& Assign (const TColGeom2d_SequenceOfBoundedCurve& Other) ;
 const  TColGeom2d_SequenceOfBoundedCurve& operator = (const TColGeom2d_SequenceOfBoundedCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Geom2d_BoundedCurve)& T) ;
  
      void Append (TColGeom2d_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Geom2d_BoundedCurve)& T) ;
  
      void Prepend (TColGeom2d_SequenceOfBoundedCurve& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Geom2d_BoundedCurve)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColGeom2d_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Geom2d_BoundedCurve)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColGeom2d_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT  const  Handle(Geom2d_BoundedCurve)& First()  const;
  
  Standard_EXPORT  const  Handle(Geom2d_BoundedCurve)& Last()  const;
  
      void Split (const Standard_Integer Index, TColGeom2d_SequenceOfBoundedCurve& Sub) ;
  
  Standard_EXPORT  const  Handle(Geom2d_BoundedCurve)& Value (const Standard_Integer Index)  const;
 const  Handle(Geom2d_BoundedCurve)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Geom2d_BoundedCurve)& I) ;
  
  Standard_EXPORT   Handle(Geom2d_BoundedCurve)& ChangeValue (const Standard_Integer Index) ;
  Handle(Geom2d_BoundedCurve)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Geom2d_BoundedCurve)
#define SeqItem_hxx <Geom2d_BoundedCurve.hxx>
#define TCollection_SequenceNode TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_hxx <TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_Type_() TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve_Type_()
#define TCollection_Sequence TColGeom2d_SequenceOfBoundedCurve
#define TCollection_Sequence_hxx <TColGeom2d_SequenceOfBoundedCurve.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom2d_SequenceOfBoundedCurve_HeaderFile
