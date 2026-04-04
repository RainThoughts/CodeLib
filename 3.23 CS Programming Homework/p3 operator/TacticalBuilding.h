#ifndef TACTICALBUILDING_H
#define TACTICALBUILDING_H

#include "Operator.h"

class TacticalBuilding
{
	const int buildingID;
	Operator stationedOp;
	double buffMultiplier;
	public:
		TacticalBuilding(std::string name_, double atk_, int buildingID_, double buffMultiplier);
		double calculateTotalDamage() const;
		void printInfo() const;
	protected:
};

#endif
