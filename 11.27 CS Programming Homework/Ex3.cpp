#include <iostream>
#include <algorithm>
#include <cassert>

template <class T> unsigned int TwoSmallest(const T &a = 0, const T &b = 0, const T &c = 0, T &s1 = 0, T &s2 = 0);
template <class T> inline void Output(const T &s1, const T &s2);

int main() {
    std::cout << "Input type\n----------\n1 : int\n2 : double\n3 : char\n4 : string\n0 : exit\n---------" << std::endl;
    while(true) {
        int tp;
        std::cin >> tp;
        switch(tp) {
            case 1:
            {
                int a, b, c, s1, s2;
                std::cout << "Int1:";    std::cin >> a;
                std::cout << "Int2:";    std::cin >> b;
                std::cout << "Int3:";    std::cin >> c;
                TwoSmallest(a, b, c, s1, s2);
                Output(s1, s2);
                break;
            }         
            case 2:
            {
                double a, b, c, s1, s2;
                std::cout << "Double1:";    std::cin >> a;
                std::cout << "Double2:";    std::cin >> b;
                std::cout << "Double3:";    std::cin >> c;
                TwoSmallest(a, b, c, s1, s2);
                Output(s1, s2);
                break;
            }
            case 3:
            {
                char a, b, c, s1, s2;
                std::cout << "Char1:";    std::cin >> a;
                std::cout << "Char2:";    std::cin >> b;
                std::cout << "Char3:";    std::cin >> c;
                TwoSmallest(a, b, c, s1, s2);
                Output(s1, s2);
                break;
            }
            case 4:
            {
                std::string a, b, c, s1, s2;
                std::cout << "String1:";    std::cin >> a;
                std::cout << "String2:";    std::cin >> b;
                std::cout << "String3:";    std::cin >> c;
                TwoSmallest(a, b, c, s1, s2);
                Output(s1, s2);
                break;
            }
            default:
                goto Exit;
        }
    }
    Exit:
    return 0;
}

template <class T> unsigned int TwoSmallest(const T &a, const T &b, const T &c, T &s1, T &s2) {
    T arr[3] = {a, b, c};
    std::sort(arr, arr+3);
    s1 = arr[0];
    s2 = arr[1];
    if(arr[0] == arr[1]) {
        if(arr[1] == arr[2]) {
            return 3;
        } else {
            return 2;
        }
    } else {
        return 1;
    }
    assert(0);
    return 0;
}

template <class T> inline void Output(const T &s1, const T &s2) {
    if(s1 == s2) {
        std::cout << "The smallest number: " << s1 << std::endl;
    } else {
        std::cout << "The smallest number: " << s1 << std::endl;
        std::cout << "The second smallest number: " << s2 << std::endl;
    }
    return;
}
