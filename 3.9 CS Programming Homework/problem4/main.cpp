#include "Time.h"
#include <iostream>
using namespace std;

int main() {
/*	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(12, 25, 42);
	t4.printStandard();
	t4.printUniversal();*/
	Time t1(23, 59, 57);
	for(int i = 0; i < 15; i++) {
		t1.printStandard();
		cout << endl;
		t1.tick();
	}
	return 0;
}
