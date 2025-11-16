/*
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
*/

#include "craps simulator.h"
#include <iostream>
using namespace std;

int w[100005], l[100005];

#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    int win = 0, lose = 0;
    for(int i = 1; i <= 1000000; i++) {
        craps simulator(static_cast<unsigned int>(rand()));
        auto rec = simulator.Simulator();
        if(rec.first == 0) {
            win ++;
            w[rec.second] ++;
        } else {
            lose ++;
            l[rec.second] ++;
        }
    }
    std::cout << "总胜率: " << std::endl;
    std::cout << static_cast<double>(win) / 1000000.0 << std::endl;
//    std::cout << win << " " << lose << std::endl;
    using ll = long long;
    ll sum = 0, sum_of_win = 0, sum_of_lose = 0;
    for(int i = 1; i <= 100000; i ++) {
        sum_of_win += w[i] * i;
        sum_of_lose += l[i] * i;
        sum += (w[i] + l[i]) * i;
    }
    std::cout << "平均进行轮数:" << std::endl;
    std::cout << static_cast<double>(sum) / 1000000.0 << std::endl;
    std::cout << "赢局平均进行轮数:" << std::endl;
    std::cout << static_cast<double>(sum_of_win) / static_cast<double>(win) << std::endl;
    std::cout << "输局平均进行轮数:" << std::endl;
    std::cout << static_cast<double>(sum_of_lose) / static_cast<double>(lose) << std::endl;
    return 0;
}