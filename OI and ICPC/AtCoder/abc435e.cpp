/*
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 200005;

int n, q;
struct pos {
    int l, r;
}a[maxn];

bool cmp(pos p1, pos p2) {
    return p1.l <= p2.l;
}

int main() {
    scanf("%d%d", &n, &q);
    for(int i = 1; i <= q; i++) {
        scanf("%d%d", &a[i].l, &a[i].r);
    }
    std::sort(a + 1, a + q + 1, cmp);
    int l, r;
    int id = 1;
    while(id <= q) {
        int L = a[id].l;
        int R = a[id].r;
        id ++;
        while(id <= q && a[id].l <= R) {
            R = std::max(R, a[id].r);
            id ++;
        }
        //std::cout << L << " " << R << std::endl;
        n -= (R - L + 1);
    }
    std::cout << n << std::endl;
    return 0;
}
*/

#include <iostream>
#include <set>
using namespace std;

int n, q;
set<pair<int,int>> S;

void del(std::pair<int,int> p) {
    S.erase(p);
    n += p.second - p.first + 1;
}

void add(std::pair<int,int> p) {
    S.insert(p);
    n -= p.second - p.first + 1;
}

int main() {
    scanf("%d%d",&n,&q);
    for(int i = 1; i <= q; i ++) {
        std::pair<int,int> p;
        scanf("%d%d",&p.first,&p.second);
        std::set<std::pair<int,int>>::iterator it = S.lower_bound(p);
        if(it != S.begin()) {
            it--;
            if(it -> second >= p.first) {
                p.first = std::min(p.first, it -> first);
                p.second = std::max(p.second, it -> second);
                del(*it);
            }
            it = S.lower_bound(p);
        }
        while(it != S.end() && it -> first <= p.second) {
            p.second = std::max(it -> second, p.second);
            del(*it);
            it = S.lower_bound(p);
        }
        add(p);
        printf("%d\n",n);
    }
    return 0;
}