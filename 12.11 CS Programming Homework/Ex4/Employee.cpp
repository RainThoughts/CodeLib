#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee (std::string first_name_, std::string last_name_, double salary_) {
	setFirstName(first_name_);
	setLastName(last_name_);
	setSalary(salary_);
}

void Employee::setFirstName(std::string first_name_) {
	firstName = first_name_;
}

void Employee::setLastName(std::string last_name_) {
	lastName = last_name_;
}

void Employee::setSalary(double salary_) {
	salary = std::min(0.0, salary_);//can't less than 0
	salary = salary_;
}

std::string Employee::getFirstName(void) const {
	return firstName;
}

std::string Employee::getLastName(void) const {
	return lastName;
}

double Employee::getSalary(void) const {
	return salary;
}

void Employee::display(void) const {
	std::cout << "First Name : " << getFirstName() << ", Last Name : " << getLastName() << std::endl;
	std::cout << "Salary : " << getSalary() << std::endl;
}
