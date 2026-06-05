#include <iostream>

class MyBase3 {
	int x;
	void func1() {
		std::cout << "MyBase3 func1 invoked!" << std::endl;
	}
protected:
	int y;
	void func2() {
		std::cout << "MyBase3 func2 invoked!" << std::endl;
	}
public:
	int z;
	MyBase3(int a, int b, int c) {
		x = a, y = b, z = c;
	}
	int getX() {
		std::cout << "MyBase3.x : " << std::endl;
		return x;
	}
	int getY() {
		std::cout << "MyBase3.y : " << std::endl;
		return y;
	}
	int getZ() {
		std::cout << "MyBase3.z : " << std::endl;
		return z;
	}
	void func3() {
		std::cout << "MyBase func3 invoked!" << std::endl;
	}
};

class MyDerived1 : public MyBase3 {
	int p;
	public:
		MyDerived1(int a) : p(a), MyBase3(1, 2, 3) {
			
		}
		int getP() {
			std::cout << "MyDerived1.p : " << std::endl;
			return p; 
		}
		void display() {
			std::cout << p << " " << getX() << " " <<y << " " << z << std::endl;
		//	func1(); private!
			func2();
			func3();
		}
};

//private Óë protectÀàËÆ 

int main() {
	MyDerived1 a(3);
	a.display();
	return 0;
}

