#ifndef FINALTEST_H
#define FINALTEST_H

#include <string>
#include "Date.h"

class FinalTest
{
	std::string title;
	Date d;
	public:
		FinalTest(const std::string &name);
		FinalTest(const std::string &name, const Date& d_);
		void setDue(const Date& d_);
		void print();
	protected:
};

#endif
