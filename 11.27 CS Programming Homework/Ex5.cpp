#include <iostream>

template <class T> T qpow(const T &, const T &);

int main() {
    std::cout << "Enter a base and an exponent: ";
    using ll = long long;
    ll x, y;
    std::cin >> x >> y;
    std::cout << x << " raised to the " << y << " is " << qpow(x, y) << std::endl;
    return 0;
}

template <class T> T qpow(const T & x, const T & y) {
    if(y == 0) {
        return T(1);
    } else {
        auto ret = qpow(x, y >> T(1));
        ret *= ret;
        if(y & T(1)) {
            ret *= x;
        }
        return ret;
    }
}