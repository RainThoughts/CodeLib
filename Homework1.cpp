//Ex1 Lecture1 2.17
/*
#include<iostream>
using namespace std;

int main() {
//	std::cout << "1 2 3 4\n";
//	std::cout << "1 " << "2 " << "3 " << "4\n";
	std::cout << "1 ";
	std::cout << "2 ";
	std::cout << "3 ";
	std::cout << "4\n";
	return 0;
}

*/

/*
//Ex2 Lecture1 2.20

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	int r;
	std::cin >> r;//input
	const double pi = std::acos(-1.0);
	double C = static_cast<double>(2 * r) * pi;
	double S = static_cast<double>(r * r) * pi;
	std::cout << std::fixed << std::setprecision(6) << r + r << " " << C << " " << S << std::endl;
	return 0;
}

*/
/*
//Ex3 2.24
#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please input an integer: ";//prompt the user to enter an integer
	cin >> number;
	if (number % 2 == 1) {
		std::cout << "Odd\n";
	}
	else {
		std::cout << "Even\n";
	}
	return 0;
}
*/
/*
//Ex4 2.27
#include <iostream>
int main() {
	std::cout << "Enter a character: ";//prompt the user to enter a character
	char ch;
	ch = getchar();
	int number = static_cast<int>(ch);//change the character into a number
	std::cout << std::endl;//end the line
	std::cout << "The number is :";
	std::cout << number << std::endl;
	return 0;
}
*/

//Ex5 2.29
#include <iostream>
using namespace std;

int main() {
	printf("integer\tsquare\tcube\n");
	for (int i = 0; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}
	return 0;
}