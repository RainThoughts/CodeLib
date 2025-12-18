//注:这个代码已经实现了进一步思考中1和2的优化 
#include <iostream>
#include <iomanip>
using namespace std;

void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

void BubbleSort(int *arr, const int n) {
	for(int i = 0; i < n; i++) {
		bool isSwapped = false;
		for(int j = 0; j < n - i - 1; j++) {
			if(arr[j + 1] < arr[j]) {
				Swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if(!isSwapped) {
			break;
		}
	}
}

int main() {
	const int n = 10;
	int arr[10] = {2,6,4,8,10,12,89,68,45,37};
	std::cout << "Data items in original order\n";
	for(int i = 0; i < n; i++) {
		std::cout << setw(4) << arr[i] << " ";
	}
	std::cout << std::endl;
	BubbleSort(arr, n);
	std::cout << "Data items in ascending order\n";
	for(int i = 0; i < n; i ++) {
		std::cout << setw(4) << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
