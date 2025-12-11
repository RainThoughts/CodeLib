#include <iostream>
using namespace std;

const int maxn = 500005;
int n;
int a[maxn];
int b[maxn];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = i + a[i] - 1;
        b[i] = std::max(b[i], b[i - 1]);
    }
    int p = 1;
    while(p <= n) {
        if(b[p] == p) break;
        p = b[p];
    }
    p = std::min(p, n);
    std::cout << p << std::endl;
    return 0;
}