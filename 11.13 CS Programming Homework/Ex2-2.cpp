//Ex2-1 验算2和奇数进行 117527 次 
//Ex2-2 采用标记, 只需要进行 113 次
#include <iostream>
#include <iomanip>
using namespace std;

int id; //id是评估性能差异的 

bool isPrime(int number) {
	if(number == 0 || number == 1) return false;
	for(int i = 2; i * i <= number; i ++) {
	//	id ++;//记录内循环的次数 
		if(number % i == 0) 
			return false;
	}
	return true;
}

bool tagged[10005];

int main() {
	std::cout << "The prime numbers from 1 to 10000 are:" << std::endl;
	int count = 0;
	for(int i = 2; i <= 100; i++) {
		if(tagged[i]) continue;
		//如果被之前的素数标记,则跳过循环,这样就只要sqrt(n)次调用就行了 
		if(isPrime(i)) {
			std::cout << setw(6) << i;
			count ++;
			if(count == 10) {
				std::cout << std::endl;
				count = 0;
			}
			for(int j = i + i; j <= 10000; j += i) {
				tagged[j] = true;
			}
		} 
	}
	for(int i = 101; i <= 10000; i++) {
		if(!tagged[i]) {
			std::cout << setw(6) << i;
			count ++;
			if(count == 10) {
				std::cout << std::endl;
				count = 0;
			}
		}
	}
//	std::cout << id << std::endl;
	return 0;
}
