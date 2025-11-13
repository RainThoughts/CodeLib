//±©¡¶º∆À„ 
#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int number) {
	if(number == 0 || number == 1) return false;
	for(int i = 2; i * i <= number; i ++) {
		if(number % i == 0) 
			return false;
	}
	return true;
}

int main() {
	std::cout << "The prime numbers from 1 to 10000 are:" << std::endl;
	int count = 0;
	for(int i = 2; i <= 10000; i ++) {
		if(isPrime(i)) {
			std::cout << setw(6) << i ;
			count ++;
		}
		if(count == 10) {
			std::cout << std::endl;
			count = 0;
		}
	}
	return 0;
}
