#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance, double initialInterest) :
Account(initialBalance), Interest(initialInterest) {
	
}

SavingsAccount::~SavingsAccount() {
	
}

double SavingsAccount::calculateInterest() {
	return balance * Interest;
}
