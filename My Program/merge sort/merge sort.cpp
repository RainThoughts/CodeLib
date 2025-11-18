//merge sort

#include <iostream>
using namespace std;

const int maxn = 200005;

int n;
int a[maxn];
int cp[maxn];

void merge_sort(int l, int r) {
    if(l >= r)
        return;
    int mid = (l + r) >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    int il = l, ir = mid + 1, count = l;
    while(il <= mid && ir <= r) {
        cp[count++] = (a[il] <= a[ir] ? a[il++] : a[ir++]);
    }
    while(il <= mid) {
        cp[count++] = a[il++];
    }
    while(ir <= r) {
        cp[count++] = a[ir++];
    }
    for(int i = l; i <= r; i++) {
        a[i] = cp[i];
    }
    return;
}

int main() {
    std::cin >> n;
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    merge_sort(1, n);
    for(int i = 1; i <= n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}