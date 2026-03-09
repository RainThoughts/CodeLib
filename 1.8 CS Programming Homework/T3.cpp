#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const char * numbers[] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
const char * types[] = {"Diamonds","Clubs","Hearts","Spades"};

void output(int number) {
	cout << numbers[number / 4] << " of " << types[number % 4] << endl;
}

void insertion_sort(int *a, int n) {
	for(int i = 0; i < n; i++) {
		int temp = a[i];
		int *id = a + i;
		while(id > a && *(id - 1) > temp) {
			*id = *(id - 1);
			id--;
		}
		*id = temp;
	}
}

const int maxSize = 5;
const int maxNumber = 52;
int a[maxSize];
bool flag[maxNumber];

int main() {
	srand(time(static_cast<unsigned int>(0)));
	for(int i = 0; i < maxSize; i++) {
		int num = rand() % 52;
		while(flag[num]) {
			num = rand() % 52;
		}
		flag[num] = true;
		a[i] = num;
	}
	for(int i = 0; i < maxSize; i++) {
		output(a[i]);
	}
	insertion_sort(a, maxSize);
	for(int i = 0; i < maxSize; i++) {
		output(a[i]);
	}
	return 0;
}
