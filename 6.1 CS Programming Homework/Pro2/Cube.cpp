#include "Cube.h"

Cube::Cube(double w_, double d_, double h_) : Rectangle(w_, d_) , h(h_) {
	
}

Cube::~Cube() {
}

double Cube::getArea() {
	return 2 * (Rectangle::getArea() + h * length + h * width);
}

double Cube::getVolume() {
	return Rectangle::getArea() * h;
}
