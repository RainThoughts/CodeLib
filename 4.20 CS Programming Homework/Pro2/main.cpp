#include <iostream>
#include "HugeInt.h"
using namespace std;

int main() {
	//1. test two kinds of constructors
	HugeInt n1(7654321);
	HugeInt n2(7891234);
	HugeInt n3("9999999999999999999999999999");
	HugeInt n4(1);
	HugeInt n5("12341234");
	HugeInt n6("7888");
	//2. test != operator
	if(n1 != n2) {
		cout << "n1 is not equal to n2" << endl;
	}
	//3. test < operator
	if(n1 < n2) {
		cout << "n1 is less than n2" << endl;
	}
	//4. test <= operator
	if(n1 <= n2) {
		cout <<"n1 is less than or equal to n2" << endl;
	}
	//5. test + - * / and << operator
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n3 << " + " << n4 << " = " << n3 + n4 << endl;
	cout << n1 << " + " << 9 << " = " << n1 + 9 << endl;
	cout << n2 << " + " << 10000 << " = " << n1 + 10000 << endl;
	cout << n5 << " * " << n6 << " = " << n5 * n6 << endl;
	cout << n5 << " - " << n6 << " = " << n5 - n6 << endl;
	cout << n5 << " / " << n6 << " = " << n5 / n6 << endl;
	return 0;
}
