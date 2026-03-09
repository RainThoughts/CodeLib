#include "Complex.h"
#include <iostream>

Complex::Complex(int r_, int i_) : realPart(r_), imaginaryPart(i_) {}

void Complex::add(Complex c1) {
	realPart += c1.realPart;
	imaginaryPart += c1.imaginaryPart;
}

void Complex::subtract(Complex c2) {
	realPart -= c2.realPart;
	imaginaryPart -= c2.imaginaryPart;
}


void Complex::display() const {
	std::cout << "(" << realPart << ", " << imaginaryPart << ")";
}
