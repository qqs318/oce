// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Common_HeaderFile
#define _BRepAlgoAPI_Common_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepAlgoAPI_BooleanOperation.hxx>
class TopoDS_Shape;
class BOPAlgo_PaveFiller;


//! The class Common provides a
//! Boolean common operation on a pair of arguments (Boolean Intersection).
//! The class Common provides a framework for:
//! -           Defining the construction of a common shape;
//! -           Implementing the   building algorithm
//! -           Consulting the result.
class BRepAlgoAPI_Common  : public BRepAlgoAPI_BooleanOperation
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a common part for shapes aS1 and aS2 .
  Standard_EXPORT BRepAlgoAPI_Common(const TopoDS_Shape& S1, const TopoDS_Shape& S2);
  
  Standard_EXPORT BRepAlgoAPI_Common(const TopoDS_Shape& S1, const TopoDS_Shape& S2, const BOPAlgo_PaveFiller& aDSF);




protected:





private:





};







#endif // _BRepAlgoAPI_Common_HeaderFile
