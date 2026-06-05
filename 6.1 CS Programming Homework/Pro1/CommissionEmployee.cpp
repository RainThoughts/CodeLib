#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const std::string &n1, const std::string &n2, const std::string &n3, double r1, double r2)
: Employee(n1, n2, n3) {
	setCommissionRate(r2);
	setGrossSales(r1);
}

CommissionEmployee::~CommissionEmployee() {
	
}

void CommissionEmployee::setCommissionRate(double r) {
	if(r > 0 && r < 1.0) {
		commissionRate = r;
	} else {
		throw std::invalid_argument("CommissionRate should be in (0, 1)!");
	}
}

double CommissionEmployee::getCommissionRate() const {
	return commissionRate;
}

void CommissionEmployee::setGrossSales(double s) {
	if(s >= 0) {
		grossSales = 0;
	} else {
		throw std::invalid_argument("GrossSales should be in [0,+inf)!");
	}
}

double CommissionEmployee::getGrossSales() const {
	return grossSales;
}

double CommissionEmployee::earnings() const {
	return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const {
	std::cout << "Commission Employee Info: \n";
	Employee::print();
	std::cout << "Gross sales: " << getGrossSales() << "\n"
	<< "Commission rate: " << getCommissionRate() << std::endl;
}

