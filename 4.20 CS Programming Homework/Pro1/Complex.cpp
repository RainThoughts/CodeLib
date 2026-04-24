#include "Complex.h"
#include <iostream>

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex Complex::operator +(const Complex & other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator -(const Complex & other) const {
	return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator *(const Complex & other) const {
	return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

bool Complex::operator ==(const Complex & other) const {
	return real == other.real && imaginary == other.imaginary;
} 

bool Complex::operator !=(const Complex & other) const {
	return real != other.real || imaginary != other.imaginary;
}

std::ostream & operator << (std::ostream & os, const Complex &c) {
	if(c.real == 0 && c.imaginary == 0) os << 0;
	else if(c.real == 0) os << c.imaginary << "i";
	else if(c.imaginary == 0) os << c.real;
	else os << c.real << "+" << c.imaginary << "i";
	return os;
}

std::istream & operator >> (std::istream & is, Complex &c) {
	//format (a, b)
/*	string str;
	is >> c.real >> str >> str;
	c.imaginary = 0;
	for()*/
	char ch;
	is >> ch >> c.real >> ch >> c.imaginary >> ch;
	return is;
}
