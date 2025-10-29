// Determinat.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
using namespace std;

const int maxn = 105;

int n;
double mat[maxn][maxn];

void add(int i, int j, double k) {
	for (int l = 1; l <= n; l++) {
		mat[i][l] += k * mat[j][l];
	}
}

void output() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

double det() {
	//将矩阵转化成上三角矩阵
	for (int i = 1; i <= n; i++) {
		if (mat[i][i] == 0) {
			int id = -1;
			for (int j = 1; j <= n; j++) {
				if (mat[j][i] != 0) {
					id = j;
					break;
				}
			}
			if (id == -1) {
				//all the column i is zero, the the det is zero
				return 0;
			}
			add(i, id, 1);//E(i,j,k)
		}
		for (int j = i + 1; j <= n; j++) {
			double w = mat[j][i] / mat[i][i];
			add(j, i, -w);
		}
	}
	//转成上三角矩阵后，对角线数字之积为行列式大小
	output();
	double det = 1;
	for (int i = 1; i <= n; i++) {
		det *= mat[i][i];
	}
	return det;
}

int main() {
	cout << "Input the size of the matrix : ";
	cin >> n;
	cout << "Input the maxtrix :\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mat[i][j];
		}
	}
	cout << "Det = " << det() << endl;
	return 0;
}