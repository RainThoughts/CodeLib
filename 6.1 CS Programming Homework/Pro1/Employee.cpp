#include "Employee.h"

Employee::Employee(const std::string &n1, const std::string &n2, const std::string &n3) {
	setFirstName(n1);
	setLastName(n2);
	setSocialSecurityNumber(n3);
}

Employee::~Employee() {
	
}

void Employee::setFirstName(const std::string &n1) {
	firstName = n1;
}

std::string Employee::getFirstName() const {
	return firstName;
}

void Employee::setLastName(const std::string &n2) {
	lastName = n2;
}

std::string Employee::getLastName() const {
	return lastName;
}

void Employee::setSocialSecurityNumber(const std::string &n3) {
	socialSecurityNumber = n3;
}

std::string Employee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void Employee::print() const {
	std::cout << getFirstName() << " " << getLastName() << "\nsocial security number : " << getSocialSecurityNumber() << std::endl;
}

