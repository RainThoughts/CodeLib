#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
class HugeInt
{
	friend HugeInt divide(HugeInt, HugeInt, int);
	friend std::ostream &operator << (std::ostream &, const HugeInt &);
	public:
	HugeInt( long = 0 ); // conversion/default constructor
	HugeInt( const char * ); // conversion constructor
	// addition operator; HugeInt + HugeInt
	HugeInt operator+( const HugeInt & ) const;
	// addition operator; HugeInt + int
	HugeInt operator+( const int ) const;
	// addition operator;
	// HugeInt + string that represents large integer value
	HugeInt operator+( const char * ) const;
	bool operator==( const HugeInt & ) const; // equality operator
	bool operator!=( const HugeInt & ) const; // inequality operator
	bool operator<( const HugeInt & ) const; // less than operator
	// less than or equal to operator
	bool operator<=( const HugeInt & ) const;
	bool operator>( const HugeInt & ) const; // greater than operator
	// greater than or equal to operator
	bool operator>=( const HugeInt & ) const;
	HugeInt operator-( const HugeInt & ) const; // subtraction operator
	HugeInt operator*( const HugeInt & ) const; // multiply two HugeInts
	HugeInt operator/( const HugeInt & ) const; // divide two HugeInts
	int getLength() const;
	private:
		short integer[1001];
		int size;
		void fix();//utility function
}; // end class HugeInt

#endif
