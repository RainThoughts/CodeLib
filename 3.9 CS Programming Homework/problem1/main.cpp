#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	Complex c1(1, 7), c2(9, 2);
	Complex c3(10, 1), c4(11, 5);
	c1.display(); cout << " + "; c2.display(); cout << " = "; c1.add(c2); c1.display(); cout << endl;
	c3.display(); cout << " - "; c4.display(); cout << " = "; c3.subtract(c4); c3.display(); cout << endl;
	return 0;
}
