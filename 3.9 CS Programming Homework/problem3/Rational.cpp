#include "Rational.h"
#include <cstdlib>
#include <iomanip>
#include <iostream>

Rational::Rational(int a_ , int b_) {
	if(b_ == 0) throw "Error: b equals to zero";
	a = a_;
	b = b_;
	fix();
}

void Rational::add(Rational x) {
	int a_ = a * x.b + x.a * b;
	int b_ = b * x.b;
	a = a_;
	b = b_;
	fix();
}

void Rational::minus(Rational x) {
	int a_ = a * x.b - x.a * b;
	int b_ = b * x.b;
	a = a_;
	b = b_;
	fix();
}

void Rational::multiply(Rational x) {
	a *= x.a;
	b *= x.b;
	fix();
}

void Rational::divide(Rational x) {
	a *= x.b;
	b *= x.a;
	fix();
}

void Rational::printRational() const {
	std::cout << a << "/" << b;
}

void Rational::printFloat() const {
	std::cout << std::fixed << std::setprecision(6) << static_cast<double>(a) / static_cast<double>(b);
}
