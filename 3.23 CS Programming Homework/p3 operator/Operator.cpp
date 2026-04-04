#include "Operator.h"

Operator::Operator(std::string name_, double atk_) : name(name_), atk(atk_) {}

double Operator::getAtk() const {
	return atk;
} 

std::string Operator::getName() const {
	return name;
}
