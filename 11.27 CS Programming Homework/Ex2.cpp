#include <iostream>
using namespace std;

template <class T> T tripleByValue(T count);
template <class T> void tripleByReference(T &count);

int main() {
    int number;
    std::cin >> number;
    std::cout << tripleByValue(number) << std::endl;
    tripleByReference(number);
    std::cout << number << std::endl;
    return 0;
}

template <class T>
T tripleByValue(T count) {
    return count * 3;
}

template <class T>
void tripleByReference(T &count) {
    count *= 3;
}
