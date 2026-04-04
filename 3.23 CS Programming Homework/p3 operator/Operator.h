#ifndef OPERATOR_H
#define OPERATOR_H

#include <string>

class Operator
{
	std::string name;
	double atk;
	public:
		Operator(std::string = "", double = 0.0);
		double getAtk() const;
		std::string getName() const;
	protected:
};

#endif
