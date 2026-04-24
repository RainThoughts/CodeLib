#include<iostream>
#include "String.h"
using namespace std;

int main() {
	String s1("114514");
	String s2("19");
	String s3(s1 + s2 + s2);
	String s4 = s3 + String("810");
	cout << s4 << endl;
	return 0;
}
