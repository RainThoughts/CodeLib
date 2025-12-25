#include <iostream>
using namespace std;

int main() {
	int arr[3][5];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 5; j++) {
			std::cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 5; i++) {
		int *ptr= arr[0] + i;
		for(int j = 0; j < 3; j++, ptr += 5) {
			std::cout << *ptr << " ";
		} 
		std::cout << std::endl;
	}
	return 0;
}

