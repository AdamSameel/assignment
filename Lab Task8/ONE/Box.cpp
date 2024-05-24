#pragma once

#include  "Box.h"

// constructor initializing member variables
Box::Box()	{
    length	=	0.0;
    breadth	=	0.0;
    height	=	0.0;
}

Box::Box(const  double  newLength,  const	double	newBreadth,	const double newHeight) {
    length	= newLength;
    breadth	= newBreadth;
    height	= newHeight;
}

Box::~Box()	{
    // destructor
}

double Box::GetVolume() {
    return  length	*  breadth	*  height;
}
// assign value of length
void Box::SetLength(double len)	{
    length = len;
}
// assign value of breadth
void  Box::SetBreadth(double bre) {
    breadth	=  bre;
}
// assign value of height
void Box::SetHeight(double hei) {
    height 	= hei;
}

//  Overload	+ operator to  add  two  Box objects.
Box  Box::operator+(const  Box& b) {
    Box  box;
    
    box.length	= this->length	+ b.length;
    box.breadth	= this->breadth	+ b.breadth;
    box.height	= this->height + b.height;
    return  box; 
}