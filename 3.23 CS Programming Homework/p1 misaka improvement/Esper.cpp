#include "Esper.h"
#include <string>
#include <iostream>

Esper::Esper(Coin& coin, std::string name_) : projectile(coin), name(name_) {
	std::cout << "Esper " << name_ << " is ready." << std::endl;
}

Esper::~Esper() {
	std::cout << "Esper" << name << " is left." << std::endl;
}

void Esper::fire() const {
	std::cout << "Fire! Railgun!" << std::endl;
}
