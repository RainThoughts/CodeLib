#include <iostream>
using namespace std;

template <class T>
class palindrome {
    T number;
public:
    explicit palindrome(T _number) : number(_number) {}
    bool is_palindrome() const {
        if(number < 0) return false;
        int rev_number = 0;
        int copy = number;
        while(copy) {
            rev_number *= 10;
            rev_number += copy % 10;
            copy /= 10;
        }
        return number == rev_number;
    }
};