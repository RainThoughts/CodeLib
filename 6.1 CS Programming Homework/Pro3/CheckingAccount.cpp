#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double initialBalance, double initialCost) :
Account(initialBalance), cost(initialCost) {
		
}
	
CheckingAccount::~CheckingAccount() {
	
}

void CheckingAccount::credit(double amount) {
	if(balance + amount < cost) {
		std::cerr << "Credit failed : balance + amount is less than the cost." << std::endl;
		return;
	}
	Account::credit(amount - cost);
}

bool CheckingAccount::debit(double amount) {
	return Account::debit(amount + cost);
}
