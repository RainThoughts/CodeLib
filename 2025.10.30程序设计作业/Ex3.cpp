//用最短的语句,最多的嵌套循环输出 
#include <iostream>
#include <cmath>
int main() {
	for(int i = -4; i <= 4; i ++) {
		for(int j = 0; j < abs(i); j ++)
			putchar(' ');
		for(int j = 0; j < 9 - abs(i + i); j ++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
