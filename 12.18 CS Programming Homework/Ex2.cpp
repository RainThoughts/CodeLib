#include <iostream>
#include <array>
using namespace std;

std::array<int, 20> arr;

int main() {
	int id = 0;
	std::cout << "Enter 20 integers between 10 and 100:\n";
	int validNumber = 0;
	while(validNumber < 20) {
		int num;
		std::cin >> num;
		if(num < 10 || num > 100) {
			std::cout << "Invalid number." << std::endl;
			continue;
		}
		bool isDuplicate = false;
		for(int i = 0; i < id; i ++) {
			if(arr[i] == num) {
				isDuplicate = true;
			}
		}
		if(isDuplicate) {
			std::cout << "Duplicate number." << std::endl;
			continue;
		}
		validNumber++;
		arr[id++] = num;
	}
	std::cout << "\nThe nonduplicate values are:\n";
	for(int i = 0; i < id; i ++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
