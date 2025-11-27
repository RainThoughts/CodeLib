#include <iostream>
#include <cmath>
using namespace std;

const double pi = acos(-1.0);

inline double circleArea(const double r);

int main() {
    std::cout << "Input the radius of the circle : ";
    double r;
    std::cin >> r;
    std::cout << circleArea(r) << std::endl;
    return 0;
}

inline double circleArea(const double r) {
    return r * r * pi;
}