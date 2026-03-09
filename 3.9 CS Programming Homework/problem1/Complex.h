#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	double realPart;
	double imaginaryPart;
	public:
		Complex(int r_ = 0, int i_ = 0);
		void add(Complex c1);
		void subtract(Complex c2);
		void display() const;
	protected:
};

#endif
