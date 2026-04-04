#include "Coin.h"
#include <iostream>

Coin::Coin(int val) : value(val) {
	std::cout << "Coin " << val << " is created." << std::endl;
}

Coin::~Coin() {
	std::cout << "Coin " << value << " is destroyed." << std::endl;	
}
