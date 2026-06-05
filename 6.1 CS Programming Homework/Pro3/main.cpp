#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<Account*> accounts;
	SavingsAccount s1(1000, 0.1);
	CheckingAccount s2(1000, 50);
	accounts.push_back(&s1);
	accounts.push_back(&s2);
	//credit 200
	for(auto ptr : accounts) {
		ptr->credit(200);
	}
	//one year passed, interest rate
	for(auto ptr : accounts) {
		auto Sptr = dynamic_cast<SavingsAccount*>(ptr);
		if(Sptr != nullptr) {
			Sptr->credit(Sptr->calculateInterest());
		}
	}
	//debit 200
	for(auto ptr : accounts) {
		ptr->debit(200);
	}
	//show the remaining balance
	for(auto ptr : accounts) {
		cout << "Remaining balance : " << (ptr->getBalance()) << endl;
	}
	return 0;
}
