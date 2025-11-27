#include <iostream>
using namespace std;

int change(std::string s) {
    int ret = 0;
    for(auto x : s) {
        ret <<= 1;
        ret += x - '0';
    }
    return ret;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << "输入的二进制数：" << s << std::endl;
    std::cout << "转换成十进制数：" << change(s) << std::endl;
    return 0;
}