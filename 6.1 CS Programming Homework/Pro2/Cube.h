#ifndef CUBE_H
#define CUBE_H

#include "Rectangle.h"

class Cube : public Rectangle
{
	double h;
	public:
		Cube(double = 0, double = 0, double  = 0);
		~Cube();
		virtual double getArea();
		double getVolume();
	protected:
};

#endif
