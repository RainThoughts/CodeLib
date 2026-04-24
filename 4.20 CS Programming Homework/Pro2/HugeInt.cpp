#include "HugeInt.h"
#include <iostream>
#include <cstdlib>

#define debug(...) std::cerr<< #__VA_ARGS__ << " : " << __VA_ARGS__ << std::endl;

int HugeInt::getLength() const {
	return size;
}

HugeInt::HugeInt(const char * str) {
	size = 0;
	while(*str != '\0' && *str == '0') str++;
	for(; *str != '\0'; str++) {
		integer[++size] = *str - '0';
	//	debug(integer[size]);
	}
	short *ptr1 = integer + 1, *ptr2 = integer + size;
	while(ptr1 < ptr2) {
		short temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++; ptr2--;
	}
	fix();
}

HugeInt::HugeInt(long num) {
	size = 0;
	while(num > 0) {
		integer[++size] = num % 10;
		num /= 10;
	}
	fix();//num = 0;
}

bool HugeInt::operator==(const HugeInt & other) const {
	if(getLength() != other.getLength()) return false;
	for(int i = 1; i <= size; i++) {
		if(integer[i] != other.integer[i]) {
			return false;
		}
	}
	return true;
}

bool HugeInt::operator!=(const HugeInt & other) const {
	return !(*this == other);
} 

bool HugeInt::operator<(const HugeInt & other) const {
	if(getLength() > other.getLength()) return false;
	if(getLength() < other.getLength()) return true;
	for(int i = getLength(); i > 0; i--) {
		if(integer[i] < other.integer[i]) return true;
		else if(integer[i] > other.integer[i]) return false;
	}
	return false;//==
}

bool HugeInt::operator<=(const HugeInt & other) const {
	return (*this < other) || (*this == other);
}

bool HugeInt::operator>(const HugeInt &other) const {
	return !(*this <= other);
}

bool HugeInt::operator>=(const HugeInt & other) const {
	return !(*this < other);
} 

std::ostream & operator << (std::ostream & os, const HugeInt &num) {
	if(num.getLength() == 0) {
		os << 0;
		return os;
	}
	for(int i = num.getLength(); i > 0; i--) {
		os << num.integer[i];
	}
	return os;
}

void HugeInt::fix() {
	while(size > 0 && integer[size] == 0) size--;
}

HugeInt HugeInt::operator+(const HugeInt &other) const {
	HugeInt ret;
	short rm = 0;
	for(int i = 1; i <= std::max(getLength(), other.getLength()); i++) {
		ret.integer[i] = rm;
		if(i <= getLength()) ret.integer[i] += integer[i];
		if(i <= other.getLength()) ret.integer[i] += other.integer[i];
		rm = ret.integer[i] / 10;
		ret.integer[i] %= 10;
	}
	ret.size = std::max(getLength(), other.getLength()) + 1;
	ret.integer[ret.size]=rm;
	ret.fix();
	return ret;
}

HugeInt HugeInt::operator + (const int num) const {
	HugeInt other(num);
	return *this + other;
} 

HugeInt HugeInt::operator + (const char * str) const {
	HugeInt other(str);
	return *this + other;
} 

HugeInt HugeInt::operator - ( const HugeInt & other) const {
	//目前版本不支持负数
	int rm = 0;
	HugeInt ret(*this);
	for(int i = 1; i <= ret.getLength(); i++) {
		ret.integer[i] -= rm;
		if(other.getLength() >= i) {
			ret.integer[i] -= other.integer[i];
		}
		if(ret.integer[i] < 0) {
			ret.integer[i] += 10;
			rm = 1;
		} else {
			rm = 0;
		}
	}
	ret.fix();
	return ret;
} 

HugeInt HugeInt::operator *(const HugeInt & other) const {
	HugeInt ret;
	ret.size = other.size + size;
	for(int i = 0; i <= ret.size; i++) {
		ret.integer[i] = 0;
	}
	for(int i = 1; i <= size; i++) {
		for(int j = 1; j <= other.size; j++) {
			ret.integer[i + j - 1] += integer[i] * other.integer[j];
		}
	}
	int rm = 0;
	for(int i = 0; i <= ret.size; i++) {
		ret.integer[i] += rm;
		rm = ret.integer[i] / 10;
		ret.integer[i] %= 10;
	}
	ret.fix();
	return ret;
}

HugeInt divide(HugeInt a, HugeInt b, int p) {
	HugeInt A;
	A.size = a.size - p + 1;
	for(int i = 1; i <= A.size; i++) {
		A.integer[i] = a.integer[i + p - 1];
	}
	A.fix();
	return A;
}

HugeInt HugeInt::operator / (const HugeInt & other) const {
	if(size < other.size) return HugeInt("0");
	HugeInt dividend = *this;
	HugeInt ret;
	ret.size = size - other.size + 1;
	for(int i = size - other.size + 1; i>=1; i--) {
		ret.integer[i] = 0;
		//	debug(i);
		while(true) {
		//	debug(dividend);
		//	debug(other);
			bool islarger = true;
			if(dividend.size - i + 1 > other.size) islarger = true;
			else if(dividend.size - i + 1 < other.size) islarger = false;
			else {
				for(int j = other.size; j >= 1; j--) {
					if(dividend.integer[i - 1 + j] < other.integer[j]) {
						islarger = false;
						break;
					}
					if(dividend.integer[i - 1 + j] > other.integer[j]) {
						islarger = true;
						break;
					}
				}
			}
			if(!islarger) break;
			ret.integer[i]++;
			short rm = 0;
			for(int j = 1; j <= other.size; j++) {
				dividend.integer[i - 1 + j] -= other.integer[j] + rm;
				rm = 0;
				while(dividend.integer[i - 1 + j] < 0) {
					rm = 1;
					dividend.integer[i - 1 + j] += 10;
				}
			}
			if(rm != 0) {
				dividend.integer[i + other.size] -= rm;
			}
			dividend.fix();
		}
	}
	ret.fix();
	return ret;//reminder = dividend;
} 
