#include <iostream>
using namespace std;

int main() {
	int count = 0;
	printf("Side 1\tSide 2\tSide 3\n");
	for(short side1 = 1; side1 <= 500; side1 ++) {
		for(short side2 = side1 + 1; side2 <= 500; side2 ++) {
			for(short hypotgenuse = side2 + 1; hypotgenuse <= 500; hypotgenuse ++) {
				if(side1 * side1 + side2 * side2 == hypotgenuse * hypotgenuse) {
					printf("%hd\t%hd\t%hd\n", side1, side2, hypotgenuse);
					count ++;
				}
			}
		}
	}
	//我这里从long改成short结果是一样的,
	//虽然side1 * side1 + side2 * side2 最大可能为 50000 > 32767但是仍然小于 65536
	//也就是, 即使 side1 * side1 + side2 * side2 和 hypotgenuse * hypotgenuse 溢出,也都会溢出成相同的数
	//如，原来int或long时两侧均为32769,那在short下两侧均为-32767,程序仍然能正常运判断 
	//故不会影响最终的结果 
	printf("A total of %d triples were found.\n",count);
	return 0;
} 
