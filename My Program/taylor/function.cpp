#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Function {
    const long double _pi = acos(-1.0);
    const long double _e = exp(1.0);
    long double p;
public:
    Function(int x = 6) : 
        p(pow(10.0,static_cast<long double>(-x))) 
    {}
    long double sin(long double x) {
        while(x > _pi + _pi) {
            x -= _pi + _pi;
        }
        //x / 1 - x ^3 / (3!) + ... + x ^n / (n!)
        long double y = x;
        long double res = 0;
        int count = 1;
        while(y * 10.0 >= p) {
            if((count >> 1) & 1) res -= y;
            else res += y;
            y *= x; y *= x;
            y /= static_cast<long double>(++count);
            y /= static_cast<long double>(++count);
        }
        return res;
    }
    long double cos(long double x) {
        while(x > _pi + _pi) {
            x -= _pi + _pi;
        }
        //x = 1 - (x)^2 / 2! + x^4 / 4! - ... 
        long double y = x;
        long double res = 0;
        int count = 1;
        while(y * 10.0 >= p) {
            if((count >> 1) & 1) res -= y;
            else res += y;
            y *= x; y *= x;
            y /= static_cast<long double>(count++);
            y /= static_cast<long double>(count++);
        }
        return res;
    }
    long double e(long double x) {
        long double fac = 1.0;
        while(x > 1) {
            fac *= _e;
            x --;
        }
        long double res = 0;
        long double y = 1;
        int count = 1;
        while(y * 30 >= p) {
            res += y;
            y *= x;
            y /= static_cast<long double>(count++);
        }
        res *= fac;
        return res;
    }
    long double ln(long double x) {
        if(x < 1) {
            return -ln(1.0 / x);
        }
        if(x >= _e) {
            return ln(x / _e) + 1.0;
        }
        //x in [1, e)
        long double y = x - 1.0;
        int count = 1;
        long double res = 0;
        while(y / static_cast<long double>(count) * 10.0 >= p) {
            if(count & 1) res += y / static_cast<long double>(count);
            else res -= y / static_cast<long double>(count);
            y *= x - 1.0;
            count ++;
        }
        return res;
    }
};




int main() {
    long double x;
    int p;
    std::cout << "输入x和精度p(代表精度确定到1e-p位)(p为不超过15的正整数)" << std::endl;
    std::cout << "特别提醒:由于ln的泰勒公式收敛很慢,输入数据在1附近,并且p不要超过6,如果超出范围自动忽视ln的计算" << std::endl;
    std::cin >> x >> p;
    Function func(p);

    std::cout << "sin(" << x << ") = " << std::fixed << std::setprecision(p) <<  func.sin(x) << std::endl;
    std::cout.unsetf(ostream::fixed);
    std::cout << std::setprecision(6);
    std::cout << "cos(" << x << ") = " << std::fixed << std::setprecision(p) <<  func.cos(x) << std::endl;
    std::cout.unsetf(ostream::fixed);
    std::cout << std::setprecision(6);
    std::cout << "e^" << x << " = " << std::fixed << std::setprecision(p) <<  func.e(x) << std::endl;
    std::cout.unsetf(ostream::fixed);
    if(.5 <= x <= 2 && p <= 6) {
        std::cout << std::setprecision(6) ;
        std::cout << "ln(" << x << ") = " << std::fixed << std::setprecision(p) <<  func.ln(x) << std::endl;
    }
    return 0;
}
