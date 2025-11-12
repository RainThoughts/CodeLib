#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double c;

double func(double x) {
	return x - log(x) - c;
}

bool check(double x, double y) {
	if (func(x) * func(y) <= 0) {
		return true;
	}
	else {
		return false;
	}
}

double solve(double l, double r) {
	while (abs(l - r) >= 0.00000001) {
		double m = (l + r) / 2.0;
		if (check(l, m)) {
			r = m;
		}
		else {
			l = m;
		}
	}
	return l;
}

int main() {
	//solve ln(x)=x
	//d(ln(x)-x)/dx=1/x dx - 1
	//(0,1) ^ (1 +inf) v
	std::cout << "The result of the equation : " << "x = log(x) + ";
	std::cin >> c;
	if (c == 1) std::cout << 1 << std::endl;
	else if (c < 1) std::cout << "N" << std::endl;
	else {
		double a = solve(0, 1);
		double b = solve(1, 1000);
		std::cout << std::fixed << std::setprecision(6) << a << " " << b << std::endl;
	}
	return 0;
}