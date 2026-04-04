#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string name, int ammo) : weaponName(name), maxAmmo(ammo) {
	std::cout << "Weapon " << getWeaponInfo() << " loaded." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << getWeaponInfo() << " dropped." << std::endl;
}

std::string Weapon::getWeaponInfo() const {
	return weaponName;
}
