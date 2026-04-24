#include "String.h"

String::String(const char * str) {
	if(str == NULL) {
		length = 0;
	} else {
		length = strlen(str);
	}
	sPtr = new char[length + 1];
	for(int i = 0; i < length; i++) {
		sPtr[i] = str[i];
	}
}

String::String(const String & str) {
	length = str.length;
	sPtr = new char[str.length + 1];
	for(int i = 0; i < length; i++) {
		sPtr[i] = str.sPtr[i];
	}
}

String String::operator+(const String &other) {
	String ret;
	ret.length = this -> length + other.length;
	ret.sPtr = new char[ret.length + 1];
	for(int i = 0; i < this -> length; i++) {
		ret.sPtr[i] = this -> sPtr[i];
	}
	for(int i = this -> length; i < ret.length; i++) {
		ret.sPtr[i] = other.sPtr[i - this -> length];
	}
	ret.sPtr[ret.length] = '\0';
	return ret;
}

String::~String() {
	delete [] sPtr;
}

String & String::operator = (const String &str) {
	length = str.length;
	delete[] sPtr;
	sPtr = new char[length + 1];
	for(int i = 0; i < length; i++) {
		sPtr[i] = str.sPtr[i];
	}
	return *this;
}

std::ostream & operator << (std::ostream &os, const String &s) {
	for(int i = 0; i < s.length; i++) {
		os << s.sPtr[i];
	}
	return os;
}
