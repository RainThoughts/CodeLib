#include<iostream>
using namespace std;

int getsum1(int a, int b) {
	int temp=a+b;
	return temp;
}

int* getsum2(int a, int b) {
	int	temp=a+b;
	return &temp;
}

int* getsum3(int a, int b) {
	int sum=a+b;
	int *temp=&sum;
	return temp;
}

int getsum4(int a, int b) {
	int sum=a+b;
	int *temp=&sum;
	return *temp;
}

int& getsum5(int a, int b) {
	int sum=a+b;
	int &temp=sum;
	return temp;
}

int main() {
	{
		int a=10,b=20;
		int temp=getsum1(a,b);
		std::cout<<temp<<std::endl;
	}
	{
		int a=10,b=20;
		int *temp=getsum2(a,b);
		std::cout<<*temp<<std::endl;
	}
	{
		int a=10,b=20;
		int *temp=getsum3(a,b);
		std::cout<<*temp<<std::endl;
	}
	{
		int a=10,b=20;
		int temp=getsum4(a,b);
		std::cout<<temp<<std::endl;
	}
	{
		int a=10,b=20;
		int &temp=getsum5(a,b);
		std::cout<<temp<<std::endl;
	}
	/*
	结论:五个程序均能正确输出结果,但第二种实现编译器提出了warning:address of local variable 'temp' returned
	第二\三\五中程序都有一定风险,可也输出了正确的答案 
	*/
	return 0;
}
