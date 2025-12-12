#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if(exponent == 0) return 1;
    return power(base, exponent - 1) * base;
}

int main() {
    std::cout << "Enter a base and an exponent: ";
    int base, exponent;
    std::cin >> base >> exponent;
    std::cout << base << " raised to the " <<  exponent << " is " << power(base, exponent) << std::endl;
    return 0;
}
