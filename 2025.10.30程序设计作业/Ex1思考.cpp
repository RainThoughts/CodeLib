#include <iostream>
using namespace std;

int main() {
	std::cout << "Enter integers(first integer should be the number of subsequent integers):" << std::endl;
	
	int n;
	std::cin >> n;
	
	int sum = 0;
	
	for(int i = 0; i < n; i++) {
		int number;
		std::cin >> number;
		sum += number;
	}
	
	double ave = static_cast<double>(sum)/n;
	
	std::cout << "The average is: " << ave << std::endl;
	
	return 0;
}
