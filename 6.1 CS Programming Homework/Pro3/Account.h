#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
	public:
		Account(double = 0);
		~Account();
		virtual void credit(double = 0);
		virtual bool debit(double = 0);
		double getBalance() const;
	protected:
		double balance;
};

#endif
