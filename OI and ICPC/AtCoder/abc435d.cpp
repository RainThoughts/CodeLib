#include <iostream>
#include <vector>
using namespace std;

const int maxn = 300005;
int n, m, q;
bool vis[maxn];
std::vector<int> G[maxn];

void dfs(int pos) {
    if(vis[pos]) return;
    vis[pos] = true;
    for(auto next : G[pos]) {
        if(!vis[next]) dfs(next);
    }
    return;
}

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= m; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        G[y].push_back(x);
    }
    scanf("%d",&q);
    for(int i = 1; i <= q; i++) {
        int id, v;
        scanf("%d%d", &id, &v);
        if(id == 1) {
            dfs(v);
        } else {
            if(vis[v]) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}