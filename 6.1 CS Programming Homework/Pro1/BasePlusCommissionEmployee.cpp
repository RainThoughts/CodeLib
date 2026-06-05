#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee
(const std::string &n1, const std::string &n2, const std::string &n3,
double r1, double r2, double r3) : CommissionEmployee(n1, n2, n3, r1, r2) {
	setBaseSalary(r3);
}

void BasePlusCommissionEmployee::setBaseSalary(double b) {
	if(b >= 0) {
		baseSalary = b;
	} else {
		throw std::invalid_argument("Base salary should be in [0, +inf)");
	}
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const {
	std::cout << "Base salaried : \n";
	CommissionEmployee::print();
	std::cout << "Base salary: " << getBaseSalary() << std::endl;
}

