#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
	double real;
	double imaginary;
	public:
		explicit Complex(double = 0.0, double = 0.0);
		Complex operator + (const Complex &) const;
		Complex operator - (const Complex &) const;
		Complex operator * (const Complex &) const;
		friend std::ostream & operator << (std::ostream &, const Complex &);
		friend std::istream & operator >> (std::istream &, Complex &);
		bool operator == (const Complex &) const;
		bool operator != (const Complex &) const;
	protected:
};

#endif
