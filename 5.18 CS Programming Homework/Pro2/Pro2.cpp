#include <iostream>

class MyBase31 {
	public:
		int a, b, c;
		MyBase31(int x, int y, int z) : a(x), b(y), c(z) {
			std::cout << "BaseClass31 object is created!" << std::endl;
		}
		~MyBase31() {
			std::cout << "BaseClass31 object is destroyed!" << std::endl;
		}
};

class MyBase32 {
	int a, b, c;
	public:
		MyBase32(int x, int y, int z) {
			std::cout << "BaseClass32 object is created!" << std::endl;
			std::cout << a << " " << b << " " << c << std::endl;
			a = x, b = y, c = z;
			std::cout << a << " " <<b << " "<< c << std::endl;
		}
		~ MyBase32() {
			std::cout << "BaseClass32 Object is destroyed!"<< std::endl;
		}
};

class MyDerived1 : public MyBase31 {
	MyBase31 a;
	int c;
	public:
		MyDerived1(int x) : c(x), MyBase31(x, 8, 9), a(5, 6, 7)  {
			std::cout << "Base Object has been created!" << std::endl;
			std::cout << "Member Object has been created! " << a.a << " " << a.b << " " << a.c << std::endl;
			std::cout << "Derived Object is created! "<< c << std::endl;
		}
};

int main() {
	MyBase31 a(1,2,3);
	MyBase32 b(4,5,6);
	std::cout << "----------------" << std::endl;
	MyDerived1 c(88);
	return 0;
}
