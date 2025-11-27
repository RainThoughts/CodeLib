#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int maxn = 305;

std::string dp[maxn][maxn];

bool cmp(std::string s1, std::string s2) {
    if(s1.size() > s2.size()) return false;
    if(s1.size() < s2.size()) return true;
    return s1 < s2;
}

int main() {
    for(int i = 0; i < maxn; i++) {
        for(int j = 0; j < maxn; j++) {
            dp[i][j] = std::string(maxn, '9');
        }
    }
    std::string str;
    int s;
    std::cin >> str >> s;
    std::reverse(str.begin(), str.end());
    for(int i = 1; i <= str.size(); i++) {
        for(int j = 1; j <= str.size() - s; j++) {
            std::string s1 = j == 1 ? std::string(1, str[i - 1]) : std::string(1, str[i - 1]) + dp[i - 1][j - 1];
            std::string s2 = dp[i - 1][j];
            dp[i][j] = min(s1, s2, cmp);
        }
    }
    std::string t = dp[str.size()][str.size() - s];
    int id = 0;
    while(id < t.size() && t[id] == '0') {
        id ++;
    }
    if(id == t.size()) std::cout << 0 << endl;
    else {
        while(id < t.size()) std::cout << t[id++];
        std::cout << std::endl;
    }
    return 0;
}