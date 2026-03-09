#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
	{
		Rational r1(1, 3);
		Rational r2(7, 8);
		r1.printRational();
		cout << " + ";
		r2.printRational();
		cout << " = ";
		r1.add(r2);
		r1.printRational();
		cout << endl;
		r1.printRational();
		cout << " = ";
		r1.printFloat();
		cout << endl;
		cout << endl;
	}
	{
		Rational r1(1, 3);
		Rational r2(7, 8);
		r1.printRational();
		cout << " + ";
		r2.printRational();
		cout << " = ";
		r1.minus(r2);
		r1.printRational();
		cout << endl;
		r1.printRational();
		cout << " = ";
		r1.printFloat();
		cout << endl;
		cout << endl;
	}
	{
		Rational r1(1, 3);
		Rational r2(7, 8);
		r1.printRational();
		cout << " x ";
		r2.printRational();
		cout << " = ";
		r1.multiply(r2);
		r1.printRational();
		cout << endl;
		r1.printRational();
		cout << " = ";
		r1.printFloat();
		cout << endl;
		cout << endl;
	}
	{
		Rational r1(1, 3);
		Rational r2(7, 8);
		r1.printRational();
		cout << " / ";
		r2.printRational();
		cout << " = ";
		r1.divide(r2);
		r1.printRational();
		cout << endl;
		r1.printRational();
		cout << " = ";
		r1.printFloat();
		cout << endl;
	}
	return 0;
}
