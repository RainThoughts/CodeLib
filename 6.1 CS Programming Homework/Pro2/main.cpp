#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Cube.h"
#include "Sphere.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<Shape*> Shapes;
	Cube s1(0.5, 4.0, 2.5);
	Circle s2(3);
	Rectangle s3(1.3, 1.3);
	Sphere s4(1);
	Shapes.push_back(&s1);
	Shapes.push_back(&s2);
	Shapes.push_back(&s3);
	Shapes.push_back(&s4);
	for(auto item : Shapes) {
		cout << "Area: " << (item->getArea()) << endl;
		Cube *CubePtr = dynamic_cast<Cube*>(item);
		if(CubePtr != nullptr) {
			cout << "Cube volume: " << (CubePtr->getVolume()) << endl;
		}
		Sphere *SpherePtr = dynamic_cast<Sphere*>(item);
		if(SpherePtr != nullptr) {
			cout << "Sphere volume: " << (SpherePtr->getVolume()) << endl;
		}
	}
	return 0;
}
