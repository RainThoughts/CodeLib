#ifndef SPHERE_H
#define SPHERE_H

#include "Circle.h"

class Sphere : public Circle {
	public:
		Sphere(double = 0);
		~Sphere();
		virtual double getArea();
		double getVolume();
	protected:
};

#endif
