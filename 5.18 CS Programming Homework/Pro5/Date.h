#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
	int year;
	int month;
	int day;
	public:
		Date(int y = 2024, int m = 1, int d = 1);
		Date(const Date&);
		friend std::ostream& operator << (std::ostream &os, Date x);
	protected:
};

#endif
