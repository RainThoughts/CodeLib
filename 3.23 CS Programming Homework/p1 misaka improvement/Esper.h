#ifndef ESPER_H
#define ESPER_H
#include "Coin.h"
#include <string>

class Esper
{
	Coin& projectile;
	std::string name;
	public:
		Esper(Coin&, std::string name_ = "Misaka Mikoto");
		~Esper();
		void fire() const;
	protected:
};

#endif
