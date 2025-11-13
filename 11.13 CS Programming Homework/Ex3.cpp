#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

unsigned short flip() {
	//正面为1反面为0
	return rand() & 1; 
}

void simulate(int number) {
	int f[] = {0, 0};
	for(int i = 0; i < number; i ++) {
		f[flip()] ++;
	}
	std::cout << "进行" << number << "次抛硬币, "<<"正面: " << f[1] << "次, 反面" << f[0] << "次\n";
	double per = static_cast<double>(f[1]) / static_cast<double>(number);
	std::cout << "抛出正面的百分比为: " << std::fixed << std::setprecision(6) << per << std::endl; 
}

int main() {
	srand(static_cast<unsigned int>(time(NULL)));
	simulate(10);
	simulate(100);
	simulate(1000);
	simulate(10000);
	simulate(100000);
	return 0;
}
