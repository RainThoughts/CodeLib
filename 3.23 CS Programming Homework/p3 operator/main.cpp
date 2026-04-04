#include <iostream>
#include "Operator.h"
#include "TacticalBuilding.h"
using namespace std;

int main() {
	TacticalBuilding id1("Liskarm", 450, 101, 1.5);
	id1.printInfo();
	std::cout << "------------------------------" << std::endl;
	TacticalBuilding id2("Mudrock", 880, 102, 1.2);
	id2.printInfo();
	return 0;
}
