#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
	public:
		SavingsAccount(double = 0, double = 1);
		~SavingsAccount();
		double calculateInterest();
	protected:
		double Interest;
};

#endif
