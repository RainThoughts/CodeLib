#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int loop = 0;
	printf("Side 1\tSide 2\tSide 3\n");
	for(int side1 = 1; side1 <= 500; side1 ++) {
		for(int side2 = side1 + 1; side2 <= 500; side2 ++) {
			for(int hypotgenuse = side2 + 1; hypotgenuse <= 500; hypotgenuse ++) {
				if(side1 * side1 + side2 * side2 == hypotgenuse * hypotgenuse) {
					printf("%d\t%d\t%d\n", side1, side2, hypotgenuse);
					count ++;
				//	if(count == 20) {
				//		break;//只退出最里面的循环 
				//	}
				}
			}
		//	if(count == 20) {
		//		break;//只退出中间的循环, 少了两组 
		//	}
		}
	//	if(count == 20) {
	//		break;
	//	}//如果只有最外面的判断,由于count在中层就超过了20,故不会执行break;
	//如果想要实现只输出前20个的效果，要在内、中、外三层均加上break 
	}
	printf("A total of %d triples were found.\n",count);
	return 0;
} 
