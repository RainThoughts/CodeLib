#ifndef LEON_H
#define LEON_H

#include <string>
#include "Weapon.h"

class Leon
{
	const std::string codeName;
	Weapon primary, secondary;
	public:
		Leon(std::string codeName_, std::string primaryName, int primaryAmmo,
		std:: string secondaryName, int secondaryAmmo);
		~Leon();
	protected:
};

#endif
