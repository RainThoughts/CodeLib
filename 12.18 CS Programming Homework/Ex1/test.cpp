#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date date1(1, 2, 2025);
	Date date2(11, 28, 2020);
	std::cout << "Date 1: "; date1.displayDate();
	std::cout << "Date 2: "; date2.displayDate();
	return 0;
}
