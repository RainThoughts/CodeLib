#include<iostream>
using namespace std;

void outputSquare(int side,char fillCharacter) {
	for(int i = 1; i <= side; i++) {
		for(int j = 1; j <= side; j++) {
			std::cout << fillCharacter ;
		}
		std::cout << std::endl;
	}
	return;
}

int main() {
	int side;
	char ch;
	std::cin >> side >> ch;
	outputSquare(side,ch);
	return 0;
}
