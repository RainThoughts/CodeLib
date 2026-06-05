#include <iostream>

class MyBase {
	int x;
public:
	MyBase(int a) : x(a) {
		
	}
	int getX() {
		std::cout << "getX: " << std::endl;
		return x;
	}
};

class MyDerived : public MyBase {
	int y;
public:
	MyDerived(int a) : y(a), MyBase(a + 4) {
	}
	int getY() {
		std::cout << "getY: " << std::endl;
		return y;
	}
};

int main() {
	MyBase a(2);
	MyBase *p = &a;
	MyDerived b(4);
	MyDerived *q = &b;
	MyBase &c = a;
	MyDerived &d = b;
	std::cout << a.getX() << " " << p->getX() << std::endl;
	std::cout << b.getX() << " " << q->getX() << std::endl;
	std::cout << b.getY() << " " << q->getY() << std::endl;
	a = b;//x = 4 + 4 = 8
	std::cout << a.getX() << " " << p->getX() << std::endl;
	p = q;
	//p 仍为 MyBase型指针, 无法访问getY
	std::cout << p->getX()  << std::endl;
	std::cout << c.getX() << " " << d.getX() << " " << d.getY() << std::endl;
	//b=a; Complie error!
	return 0;
}
