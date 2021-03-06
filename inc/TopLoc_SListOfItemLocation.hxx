// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_SListOfItemLocation_HeaderFile
#define _TopLoc_SListOfItemLocation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TopLoc_SListNodeOfItemLocation.hxx>
#include <Standard_Boolean.hxx>
class TopLoc_SListNodeOfItemLocation;
class Standard_NoSuchObject;
class TopLoc_ItemLocation;


//! An SListOfItemLocation is a LISP like list of Items.
//! An SListOfItemLocation is :
//! . Empty.
//! . Or it has a Value and a  Tail  which is an other SListOfItemLocation.
//!
//! The Tail of an empty list is an empty list.
//! SListOfItemLocation are  shared.  It  means   that they  can  be
//! modified through other lists.
//! SListOfItemLocation may  be used  as Iterators. They  have Next,
//! More, and value methods. To iterate on the content
//! of the list S just do.
//!
//! SListOfItemLocation Iterator;
//! for (Iterator = S; Iterator.More(); Iterator.Next())
//! X = Iterator.Value();
//!
//! Memory usage  is  automatically managed for  SListOfItemLocations
//! (using reference counts).
class TopLoc_SListOfItemLocation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty List.
  Standard_EXPORT TopLoc_SListOfItemLocation();
  
  //! Creates a List with <anItem> as value  and <aTail> as tail.
  Standard_EXPORT TopLoc_SListOfItemLocation(const TopLoc_ItemLocation& anItem, const TopLoc_SListOfItemLocation& aTail);
  
  //! Creates a list from an other one. The lists  are shared.
  Standard_EXPORT TopLoc_SListOfItemLocation(const TopLoc_SListOfItemLocation& Other);
  
  //! Sets  a list  from  an  other  one. The  lists are
  //! shared. The list itself is returned.
  Standard_EXPORT   TopLoc_SListOfItemLocation& Assign (const TopLoc_SListOfItemLocation& Other) ;
  TopLoc_SListOfItemLocation& operator = (const TopLoc_SListOfItemLocation& Other) 
{
  return Assign(Other);
}
  
      Standard_Boolean IsEmpty()  const;
  
  //! Sets the list to be empty.
  Standard_EXPORT   void Clear() ;
~TopLoc_SListOfItemLocation()
{
  Clear();
}
  
  //! Returns the current value of the list. An error is
  //! raised  if the list is empty.
  Standard_EXPORT  const  TopLoc_ItemLocation& Value()  const;
  
  //! Returns the current value of the list. An error is
  //! raised if the  list  is empty.   This value may be
  //! modified.   A   method modifying the  value can be
  //! called. The value will be modified in the list.
  Standard_EXPORT   TopLoc_ItemLocation& ChangeValue() ;
  
  //! Changes the current value in the list. An error is
  //! raised if the list is empty.
  Standard_EXPORT   void SetValue (const TopLoc_ItemLocation& anItem) ;
  
  //! Returns the current tail of  the list. On an empty
  //! list the tail is the list itself.
  Standard_EXPORT  const  TopLoc_SListOfItemLocation& Tail()  const;
  
  //! Returns the current  tail of the list.   This tail
  //! may be modified.  A method modifying the  tail can
  //! be called. The tail will be modified in the list.
  Standard_EXPORT   TopLoc_SListOfItemLocation& ChangeTail() ;
  
  //! Changes the current tail  in the list. On an empty
  //! list SetTail is Assign.
  Standard_EXPORT   void SetTail (const TopLoc_SListOfItemLocation& aList) ;
  
  //! Replaces the list by a list with <anItem> as Value
  //! and the  list <me> as  tail.
      void Construct (const TopLoc_ItemLocation& anItem) ;
  
  //! Returns a new list  with  <anItem> as Value an the
  //! list <me> as tail.
      TopLoc_SListOfItemLocation Constructed (const TopLoc_ItemLocation& anItem)  const;
  
  //! Replaces the list <me> by its tail.
      void ToTail() ;
  
  //! Sets  the iterator  to iterate   on the content of
  //! <aList>. This is Assign().
      void Initialize (const TopLoc_SListOfItemLocation& aList) ;
  
  //! Returns True if the iterator  has a current value.
  //! This is !IsEmpty()
      Standard_Boolean More()  const;
  
  //! Moves the iterator to the next object in the list.
  //! If the iterator is empty it will  stay empty. This is ToTail()
      void Next() ;




protected:





private:



  Handle(TopLoc_SListNodeOfItemLocation) myNode;


};


#include <TopLoc_SListOfItemLocation.lxx>





#endif // _TopLoc_SListOfItemLocation_HeaderFile
