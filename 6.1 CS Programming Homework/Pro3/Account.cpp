#include "Account.h"

Account::Account(double initialBalance) {
	if(initialBalance < 0) {
		std::cerr << "Balance should be equal to 0!" << std::endl;
		initialBalance = 0;
	}
	balance = initialBalance;
}

Account::~Account() {
	
}

void Account::credit(double amount) {
	balance += amount;
}

bool Account::debit(double amount) {
	if(balance < amount) {
		std::cerr << "Debit amount is exceed account balance!" << std::endl;
		return false;
	}
	balance -= amount;
	return true;
}

double Account::getBalance() const {
	return balance;
}
