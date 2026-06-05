#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
	public:
		Rectangle(double=0,double=0);
		~Rectangle();
		virtual double getArea();
	protected:
		double length, width;

};

#endif
