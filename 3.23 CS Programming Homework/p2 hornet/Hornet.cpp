#include "Hornet.h"
#include <iostream>

Hornet::Hornet(int mx) : maxSilk(mx), currentSilk(0) {
	
}

void Hornet::gatherSilk(int amount) {
	currentSilk += amount;
	if(currentSilk > maxSilk) {
		currentSilk = maxSilk;
	}
}

void Hornet::heal() {
	if(currentSilk < 30) {
		std::cout << "Not enough silk!" << std::endl;
	} else {
		std::cout << "Heal succcessful." << std::endl;
		currentSilk -= 30;		
	}
}


void Hornet::displayStatus() const {
	std::cout << "Silk: " << currentSilk << "/" << maxSilk << std::endl;
}
