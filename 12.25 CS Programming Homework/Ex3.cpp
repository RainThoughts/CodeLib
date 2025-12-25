#include <iostream>
using namespace std;

int getlen(char * const str) {
	const char *ptr=str;
	int ret=0;
	while(*ptr!='\0') {
		//注意:是'\0',不是'0' 
		++ptr;
		++ret;
	}
	return ret;
}

int main() {
	std::cout<<"Please input two strings:" << std::endl;
	char str1[1000]={0}, str2[1000]={0}, str[2001]={0};
	cin.getline(str1, 1000, '\n');
	cin.getline(str2, 1000, '\n');
	int len1 = getlen(str1);
	int len2 = getlen(str2);
//	std::cout<<len1 << " " << len2 << std::endl;
	for(int i = 0; i < len1 - 1; i++) {
		str[i] = str1[i];
	}
	str[len1 - 1] = ',';
	str[len1] = ' ';
	for(int i = len1 + 1; i < len1 + len2 + 1; i++) {
		str[i] = str2[i - len1 - 1];
	}
//	std::cout<<str<<std::endl;
	int len = getlen(str);
	for(int i = 0; i < len; i++) {
		if('a'<=str[i]&&str[i]<='z') {
			str[i] -= 'a';
			str[i] += 'A';
		}
	}
	std::cout << str << std::endl;
	return 0;
}
