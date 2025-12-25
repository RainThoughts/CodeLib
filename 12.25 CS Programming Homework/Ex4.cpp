#include <iostream>
using namespace std;

bool paren_check(const char * const str) {
	const char * ptr = str;
	int unmatched_paren = 0;
	while(*ptr != '\0') {
		if(*ptr=='(') {
			unmatched_paren++;
		}
		if(*ptr==')') {
			unmatched_paren--;
		}
		if(unmatched_paren < 0) {
			return false;
		}
		++ptr;
	}
	if(unmatched_paren != 0) {
		return false;
	} else {
		return true;
	}
}

int main() {
	char str[1005];
	std::cin >> str;
	if(paren_check(str)) {
		std::cout << "Vaild!" << std::endl;
	} else {
		std::cout << "Invaild!" << std::endl;
	}
	return 0;
}
