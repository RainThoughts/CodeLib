#include "Sphere.h"

Sphere::Sphere(double r) : Circle(r) {
	
}

Sphere::~Sphere() {
	
}

double Sphere::getVolume() {
	return Circle::getArea() * 4.0 / 3.0 * r;
}

double Sphere::getArea() {
	return Circle::getArea() * 4.0;
}
