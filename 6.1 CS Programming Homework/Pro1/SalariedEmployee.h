#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h" 

class SalariedEmployee : public Employee
{
	public:
		SalariedEmployee(const std::string &, const std::string &,
                     const std::string &, double = 0.0);
	    virtual ~SalariedEmployee() {} // virtual destructor
	
	    void setWeeklySalary(double); // set weekly salary
	    double getWeeklySalary() const; // return weekly salary
	
	    // keyword virtual signals intent to override
	    virtual double earnings() const override; // calculate earnings
	    virtual void print() const override; // print object
	protected:
		double weeklySalary;
};

#endif

