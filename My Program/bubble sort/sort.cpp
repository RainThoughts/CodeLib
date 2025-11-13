#include <iostream>
using namespace std;

const int maxn = 1005;
int n;
int a[maxn];

int main() {
    std::cin >> n;
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            if(a[j] > a[j + 1]) {
                int x = a[j + 1];
                a[j + 1] = a[j];
                a[j] = x;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}