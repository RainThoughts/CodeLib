#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle a;
	Rectangle b(5, 4);
	Rectangle c;
	cout << fixed << setprecision(1);
	cout << "a: length = " << a.getLength() << "; width = " << a.getWidth() << "; perimeter = " << a.Perimeter() << "; area = " << a.Area() << endl;
	cout << "b: length = " << b.getLength() << "; width = " << b.getWidth() << "; perimeter = " << b.Perimeter() << "; area = " << b.Area() << endl;
	cout << "c: length = " << c.getLength() << "; width = " << c.getWidth() << "; perimeter = " << c.Perimeter() << "; area = " << c.Area() << endl;
	return 0;
}
