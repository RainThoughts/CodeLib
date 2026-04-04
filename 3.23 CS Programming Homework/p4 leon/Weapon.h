#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
	std::string weaponName;
	const int maxAmmo;
	public:
		Weapon(std::string, int);
		~Weapon();
		std::string getWeaponInfo() const;
	protected:
};

#endif
