#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
	private:
		std::string firstName, lastName;
		double salary;
	public:
		explicit Employee(std::string, std::string, double);
		void setFirstName(std::string);
		void setLastName(std::string);
		void setSalary(double);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		double getSalary(void) const;
		void display(void) const;
};

#endif
