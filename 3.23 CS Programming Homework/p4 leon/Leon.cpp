#include "Leon.h"
#include <iostream>

Leon::Leon(std::string codeName_, std::string primaryName, int primaryAmmo, std:: string secondaryName, int secondaryAmmo) :
	primary(primaryName, primaryAmmo),
	secondary(secondaryName, secondaryAmmo),
	codeName(codeName_) {
	std::cout << "Agent " << codeName << " deployed." << std::endl;		
}
//调用构造函数顺序与类中声明的顺序相关，与构造函数初始化器的排列顺序无关

Leon::~Leon() {
	std::cout << "Agent " << codeName << " extracted." << std::endl;
}
//调用析构函数顺序是先析构主对象，然后再析构成员对象 
