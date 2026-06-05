#include <iostream>

class MyBase1 {
	public:
		MyBase1() {
			std::cout << "BaseClass1 object is created!" << std::endl;
		}
		~MyBase1() {
			std::cout << "BaseClass1 object is destroyed!" << std::endl;
		}
};

class MyDerived1 : public MyBase1 {
	public:
		MyDerived1() {
			std::cout << "First layer derived object is created!" << std::endl;
		}
		~MyDerived1() {
			std::cout << "First layer derived object is destroyed!" << std::endl; 
		}
};

class MyDerived11 : public MyDerived1 {
	public:
		MyDerived11() {
			std::cout << "Second layer derived object is created!" << std::endl;
		}
		~MyDerived11() {
			std::cout << "Second layer derived object is destroyed!" << std::endl;
		}
};

int main() {
	MyBase1 a;
	std::cout << "-------------" << std::endl;
	MyDerived1 b;
	std::cout << "-------------" << std::endl;
	MyDerived11 c;
	std::cout << "end main" << std::endl;
	return 0;
}
