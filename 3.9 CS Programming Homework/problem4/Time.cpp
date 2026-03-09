#include "Time.h"
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cstdlib>

Time::Time(int h_, int m_, int s_) {
	setTime(h_, m_, s_);
}

void Time::setTime(int h_, int m_, int s_) {
	setHour(h_);
	setMinute(m_);
	setSecond(s_);
}

void Time::setHour(int h) {
	if(0 <= h && h < 24) {
		hour = h;
	} else {
		throw "hour must be 0-23";
	}
}

void Time::setMinute(int m) {
	if(0 <= m && m < 60) {
		minute = m;
	} else {
		throw "minute must be 0-59";
	}
}

void Time::setSecond(int s) {
	if(0 <= s && s < 60) {
		second = s;
	} else {
		throw "second must be 0-59";
	}
}

unsigned int Time::getHour() const {
	return hour;
}

unsigned int Time::getMinute() const {
	return minute;
}

unsigned int Time::getSecond() const {
	return second;
}

void Time::printUniversal() const {
	std::cout << std::setfill('0') << std::setw(2) << getHour() << ":" << 
	std::setw(2) << getMinute() << ":" << std::setw(2) << getSecond();
}

void Time::printStandard() const {
	std::cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
	<< ":" << std::setfill('0') << std::setw(2) << getMinute() << 
	":" << std::setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

void Time::tick() {
	second++;
	if(second == 60) {
		second = 0;
		minute++;
	}
	if(minute == 60) {
		minute = 0;
		hour++;
	}
	if(hour == 24) {
		hour = 0;
	}
}
