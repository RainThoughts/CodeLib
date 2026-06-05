#include "FinalTest.h"

FinalTest::FinalTest(const std::string &name) : title(name) {}

FinalTest::FinalTest(const std::string &name, const Date& d_) : title(name), d(d_) {}

void FinalTest::setDue(const Date& d_) {
	d = d_;
}

void FinalTest::print() {
	std::cout << "Title: " << title << std::endl << "Test Date: " << d << std::endl;
}
