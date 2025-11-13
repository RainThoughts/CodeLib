#include "C:\Users\28401\Desktop\vscode\palindrome\palindrome.h"
//如果.h文件和.cpp在同一个目录下,可以直接写成下面的形式
//s#include "palindrome.h"
//但注意两个文件的目录都要是英文才可以,不然会出错
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    palindrome<int> solver(n);
    std::cout << boolalpha << solver.is_palindrome() << endl;
    return 0;
}