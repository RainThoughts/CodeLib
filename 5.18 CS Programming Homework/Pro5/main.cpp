#include <iostream>
#include "FinalTest.h"

int main() {
	FinalTest item1("C++ Test", Date(2024,6,2));
	item1.print();
	FinalTest item2("Java");
	item2.print();
	item2.setDue(Date(2024, 6, 10));
	item2.print();
	return 0;
}
