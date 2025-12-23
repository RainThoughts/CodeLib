#include <iostream>
using namespace std;

const int maxn = 5005;
int n;
int a[maxn];

int main() {
	std::cin >> n;
	for(int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	for(int i = 2; i <= n; i++) {
		int insertval = a[i];
		int id = i;
		while(id > 1 && a[id - 1] > insertval) {
			a[id] = a[id - 1];
			id--;
		}
		a[id] = insertval;
	}
	for(int i = 1; i <= n; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
