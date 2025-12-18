#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(int month_, int day_, int year_) {
	setMonth(month_);
	setDay(day_);
	setYear(year_);
}

void Date::setDay(int day_) {
	day = day_;
}

void Date::setMonth(int month_) {
	if(month_ < 1 || month_ > 12) {
		month_ = 1;
	}
	month = month_;
}

void Date::setYear(int year_) {
	year = year_;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

void Date::displayDate() {
	std::cout << month << "/" << day << "/" << year << std::endl;
}
