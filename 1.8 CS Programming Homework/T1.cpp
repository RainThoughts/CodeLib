#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int number = 0;
	for(int i = 0; i < str.size(); i++) {
		number *= 2;
		number += str[i] - '0';
	}
	cout << number << endl;
	return 0;
}
