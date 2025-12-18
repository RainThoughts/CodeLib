#include <iostream>
#include <string>
using namespace std;

const int maxSize = 20;
const int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int x = 0, y = 0;
int direction = 3;//0 : up 1 : down 2 : left 3 : right
int pen = 0;//pen up
int graph[maxSize][maxSize];

int main() {
	while(true) {
		char order; 
		cin.get(order);
//		std::cout << "Processing: "<< order<< std::endl;
		switch(order) {
			case '9': {
				exit(0);
				break;
			}
			case '6': {
				for(int i = 0; i < maxSize; i++) {
					for(int j = 0; j < maxSize; j++) {
						std::cout << (graph[i][j]?'*':' ');
					}
					std::cout << std::endl;
				}
				break;
			}
			case '5': {
				int step;
				cin.get(order);
				std::cin >> step;
//				std::cout << x << " " << y << std::endl;
				for(int i = 0; i < step; i++) {
					graph[x + i * dir[direction][0]][y + i * dir[direction][1]] = pen;
				}
				x += (step - 1) * dir[direction][0];
				y += (step - 1) * dir[direction][1];
//				std::cout << x << " " << y << std::endl;
				break;
			}
			case '1': {
				pen = 0;
				break;
			}
			case '2': {
				pen = 1;
				break;
			}
			case '3': {
				switch(direction) {
					case 0:{
						direction = 3;
						break;
					}
					case 3:{
						direction = 1;
						break;
					}
					case 1:{
						direction = 2;
						break;
					}
					case 2:{
						direction = 0;
						break;
					}
				}
				break;
			}
			case '4': {
				switch(direction) {
					case 0:{
						direction = 2;
						break;
					}
					case 2:{
						direction = 1;
						break;
					}
					case 1:{
						direction = 3;
						break;
					}
					case 3:{
						direction = 0;
						break;
					}
				}
				break;
			}
			default: {
				//ignore the order and read '\n' and ' '
				break;
			}
		}
	}
	return 0;
}
