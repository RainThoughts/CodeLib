#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
	public:
		Circle(double=0);
		~Circle();
		virtual double getArea();
	protected:
		double r;
};


#endif
