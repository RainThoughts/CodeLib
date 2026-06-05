#include "Date.h"
#include <iostream>

Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

Date::Date(const Date& x) : year(x.year), month(x.month), day(x.day) {}

std::ostream& operator << (std::ostream& os, Date x) {
	os << x.year << "-" << x.month << "-" << x.day;
	return os;
}
