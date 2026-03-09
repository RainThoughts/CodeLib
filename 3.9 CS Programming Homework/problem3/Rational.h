#ifndef RATIONAL_H
#define RATIONAL_H
#include <cstdlib>
#include <cmath>

class Rational
{
	int a;
	int b;
	int gcd(int x, int y) {
		return y == 0 ? x : gcd(y, x % y);
	}
	int fix() {
		if(b < 0) {
			a *= -1;
			b *= -1;
		}
		//assure b > 0
		int g = gcd(abs(a), abs(b));
		a /= g;
		b /= g;
	}
	public:
		Rational(int a_ = 0, int b_ = 1);
		void add(Rational x);
		void minus(Rational x);
		void multiply(Rational x);
		void divide(Rational x);
		void printRational() const;
		void printFloat() const;
	protected:
};

#endif
