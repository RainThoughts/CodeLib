#include "TacticalBuilding.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

TacticalBuilding::TacticalBuilding(std::string name_, double atk_, int buildingID_, double buffMultiplier_)
: stationedOp(name_, atk_),
buildingID(buildingID_),
buffMultiplier(buffMultiplier_) {}

double TacticalBuilding::calculateTotalDamage() const{
	return stationedOp.getAtk() * buffMultiplier;
}

void TacticalBuilding::printInfo() const {
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Building ID: " << buildingID << std::endl;
	std::cout << "Stationed Operator: " << stationedOp.getName() << std::endl;
	std::cout << "Base ATK: " << stationedOp.getAtk() << std::endl;
	std::cout << "Buff Multiplier: " << buffMultiplier << std::endl;
	std::cout << "Total Output Damage: " << calculateTotalDamage() << std::endl;
}
