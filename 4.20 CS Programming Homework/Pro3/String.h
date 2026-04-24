#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>
#include <cassert>

class String
{
	friend std::ostream &operator<<(std::ostream &output, const String &s);
	public:
	String(const char * const = ""); // conversion constructor
	String(const String &); // copy constructor
	~String(); // destructor
	String &operator=(const String &);
	String operator+(const String &);
	private:
		char *sPtr; // pointer to start of string
		int length; // string length
}; // end class String

#endif
