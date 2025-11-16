#include "craps simulator.h"
#include <iostream>
using namespace std;

int main() {
    std::cout << "Input a seed: ";
    int seed; std::cin >> seed;
    craps simulator(seed);
    simulator.Simulator();
    return 0;
}