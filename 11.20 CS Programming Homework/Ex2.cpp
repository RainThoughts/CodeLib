#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    return hours <= 3.0 ? 2.0 : std::min(10.0, 2.0 + ceil(hours - 3.0) * .5);
}

int main() {
    std::cout << "Enter parking hours for 3 cars: ";
    double c1, c2, c3;
    std::cin >> c1 >> c2 >> c3;

    std::cout << std::endl;

    std::cout << std::left << 
                std::setw(5) << "Car" << 
                std::right << std::setw(10) << "Hours" <<
                std::right << std::setw(12) << "Charge" << std::endl;


    std::cout << std::left << std::setw(5) << 1 << 
                std::right << std::setw(10) << std::fixed << std::setprecision(1) << c1 << 
                std::right << std::setw(12) << std::fixed << std::setprecision(2) << calculateCharges(c1) << std::endl;
    std::cout << std::left << std::setw(5) << 2 << 
                std::right << std::setw(10) << std::fixed << std::setprecision(1) << c2 << 
                std::right << std::setw(12) << std::fixed << std::setprecision(2) << calculateCharges(c2) << std::endl;
    std::cout << std::left << std::setw(5) << 3 << 
                std::right << std::setw(10) << std::fixed << std::setprecision(1) << c3 << 
                std::right << std::setw(12) << std::fixed << std::setprecision(2) << calculateCharges(c3) << std::endl;
    std::cout << std::left << std::setw(5) << "TOTAL" << 
                std::right << std::setw(10) << std::fixed << std::setprecision(1) << c1 + c2 + c3 << 
                std::right << std::setw(12) << std::fixed << std::setprecision(2) << calculateCharges(c1) + calculateCharges(c2) + calculateCharges(c3) << std::endl;
    return 0;
}

//issue : 制表符\t后left right流操作会忽视