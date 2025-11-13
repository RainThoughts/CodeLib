#include <iostream>
#include <cstdlib>
using namespace std;

bool isPrime[200005];
int main() {
    for(int i = 2; i <= 200000; i ++) {
        isPrime[i] = true;
    }
    for(int i = 2; i * i <= 200000; i ++) {
        if(!isPrime[i]) continue;
        for(int j = i + i; j <= 200000; j += i) {
            isPrime[j] = false;
        }
    }
    for(int i = 2; i <= 1000; i++) {
        if(isPrime[i]) std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}