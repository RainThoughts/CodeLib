#include "Hornet.h"
#include <iostream>
using namespace std;

int main() {
	std::cout << "Normal Hornet action:" << std::endl;
	Hornet normal_hornet(100);
	normal_hornet.gatherSilk(50);
	normal_hornet.displayStatus();
	normal_hornet.heal();
	normal_hornet.displayStatus();
	std::cout << std::endl << "Const Hornet action:" << std::endl;
	const Hornet const_hornet(150);
	const_hornet.displayStatus();
//	const_hornet.gatherSilk(50);    Complie Error!
//	const_hornet.heal();            Complie Error!
	return 0;
}
