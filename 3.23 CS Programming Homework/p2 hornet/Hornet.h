#ifndef HORNET_H
#define HORNET_H

class Hornet
{
	int currentSilk;
	const int maxSilk;
	public:
		Hornet(int = 100);
		void gatherSilk(int amount);
		void heal();
		void displayStatus() const;
	protected:
};

#endif
