//Magic Square
#include <iostream>
#include <iomanip>
using namespace std;

const int maxn = 1005;

int n;
int arr[maxn][maxn];

int main() {
    std::cout << "Please input an odd integer, representing the size of the magic square:" << std::endl;
    std::cin >> n;
    int x = 0, y = n / 2;
    for(int i = 0; i < n * n; i++) {
 //       std::cout << i + 1 << " " << x + 1 << " " << y + 1 << std::endl;
        arr[x][y] = i + 1;
        if(i != n * n - 1) {
            //generating the next index of the square
            x--, y++;
            if(x < 0 && y < n) {
                x = n - 1;
            } else if(x >= 0 && y >= n) {
                y = 0;
            } else if(x < 0 && y >= n) {
                x++, y--;
                x++;
            }
            if(arr[x][y]) {
                x++, y--;
                x++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << std::left << std::setw(5) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}