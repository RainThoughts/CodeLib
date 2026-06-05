#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee
{
	public:
		CommissionEmployee(const std::string &, const std::string &, const std::string &, double = 0, double = 0);
		virtual ~CommissionEmployee();
		void setCommissionRate(double);
		double getCommissionRate() const;
		void setGrossSales(double);
		double getGrossSales() const;
		virtual double earnings() const override;
		virtual void print() const override;
	protected:
		double grossSales;
		double commissionRate;
};

#endif
