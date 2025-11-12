#include <iostream>
using namespace std;

int main() {
	int number, l, r;
	std::cin >> number >> l >> r;
	int len = 32 - __builtin_clz(number);
	std::cout << ((number & (1 << len - l + 1) - 1) >> len - r) <<std::endl;
	return 0; 
} 

