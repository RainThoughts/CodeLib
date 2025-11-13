#include<bits/stdc++.h>
using namespace std;

int main() {
	std::cout << "Enter integers (9999 to end):" << std::endl;
	int count = 0;
	int sum = 0;
	
	for(int number; number != 9999;) {
		std::cin >> number;
		if(number != 9999) {
			count ++;
			sum += number;
		}
	}
	
	double ave = static_cast<double>(sum) / count;
	std::cout << "The average is: "<<ave << std::endl;
	return 0;
}
