#include "Circle.h"
#include<cmath>

Circle::Circle(double a) : r(a) {
}

Circle::~Circle() {
}

double Circle::getArea() {
	return r * r * acos(-1.0);
}
