#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Shape(),
length(a), width(b) {}

Rectangle::~Rectangle() {
}

double Rectangle::getArea() {
	return length * width;
}
