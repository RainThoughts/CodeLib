#include <iostream>
using namespace std;

int main() {
	int count = 0;
	printf("Side 1\tSide 2\tSide 3\n");
	for(int side1 = 1; side1 <= 500; side1 ++) {
		for(int side2 = side1 + 1; side2 <= 500; side2 ++) {
			for(int hypotgenuse = side2 + 1; hypotgenuse <= 500; hypotgenuse ++) {
				if(side1 * side1 + side2 * side2 == hypotgenuse * hypotgenuse) {
					printf("%d\t%d\t%d\n", side1, side2, hypotgenuse);
					count ++;
				}
			}
		}
	}
	printf("A total of %d triples were found.\n",count);
	return 0;
} 
