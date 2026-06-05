#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
	public:
		CheckingAccount(double = 0, double = 0);
		~CheckingAccount();
		virtual void credit(double=0);
		virtual bool debit(double=0);
	protected:
		double cost;
};

#endif
