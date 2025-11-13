#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int loop = 0;
	printf("Side 1\tSide 2\tSide 3\n");
	for(int side1 = 1; side1 <= 500; side1 ++) {
		if(side1 == 8) {
			continue;
		} 
		for(int side2 = side1 + 1; side2 <= 500; side2 ++) {
			for(int hypotgenuse = side2 + 1; hypotgenuse <= 500; hypotgenuse ++) {
				loop ++;
				if(side1 * side1 + side2 * side2 == hypotgenuse * hypotgenuse) {
					printf("%d\t%d\t%d\n", side1, side2, hypotgenuse);
					count ++;
				}
			}
		}
	}
	printf("A total of %d triples were found.\n",count);
	std::cout << "程序进行:" << loop << "次循环" << std::endl;
	//解释loop改变原因:
	//由于最外层side1 == 8时，中层内层循环直接跳过不执行，故循环次数由20708500减为20587714次 
	return 0;
} 
