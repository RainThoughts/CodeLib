#include "Esper.h"
#include "Coin.h"
#include <iostream>
using namespace std;

int main() {
	Coin coin(100);
	Esper misaka(coin);
	misaka.fire();
	return 0;
}

