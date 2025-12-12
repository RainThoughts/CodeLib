#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
	Employee employee1("Bob", "Jones", 34500);
	Employee employee2("Susan", "Baker", 37800);
	std::cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; Yearly Salary: " << employee1.getSalary() << std::endl;
	std::cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; Yearly Salary: " << employee2.getSalary() << std::endl;
	std::cout << "Increasing employee salaries by 10%" << std::endl;
	employee1.setSalary(1.1 * employee1.getSalary());
	employee2.setSalary(1.1 * employee2.getSalary());
	std::cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; Yearly Salary: " << employee1.getSalary() << std::endl;
	std::cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; Yearly Salary: " << employee2.getSalary() << std::endl;
	return 0;
}
