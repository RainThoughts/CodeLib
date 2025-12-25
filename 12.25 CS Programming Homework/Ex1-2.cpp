#include <iostream>
using namespace std;

void swap1(int a,int b) {
	int temp=a;
	a=b;
	b=temp;
}

void swap2(int a,int b) {
	int *temp=&a;
	a=b;
	b=*temp;
}

void swap3(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swap4(int *a,int *b) {
	int *temp=a;
	a=b;
	b=temp;
}

void swap5(int &a,int &b) {
	int temp=a;
	a=b;
	b=temp;
}

int main() {
	{
		int a=10,b=20;	
		swap1(a,b);
		std::cout<<a<<" "<<b<<std::endl;
		/*
		输出:10 20
		解释:由于函数传的是值,不改变主函数中的变量 
		*/
	}
	{
		int a=10,b=20;	
		swap2(a,b);
		std::cout<<a<<" "<<b<<std::endl;
		/*
		输出:10 20
		解释:由于函数传的是值,不改变主函数中的变量(函数体内使用指针不影响此结论) 
		*/
	}
	{
		int a=10,b=20;	
		swap3(&a,&b);
		std::cout<<a<<" "<<b<<std::endl;
		/*
		输出:20 10
		解释:
		temp=*a
			temp=*a=10
		*a=*b
			注意:一定是值之间的赋值, 不要写成指针的赋值a=b !!! 
			否则a和b就指向同一个变量,结果就会输出10 10 
			此时*a->a=20 *b->b=20
		*a=temp
			此时*a=temp=10,实现两数交换 
		*/
	}
	{
		int a=10,b=20;	
		swap4(&a,&b);
		std::cout<<a<<" "<<b<<std::endl;
		/*
		输出:10 20
		解释:
		一开始a->a,b->b 
		temp=a
			a->a,则temp->a,
		a=b
			b->b,则a->b 
		b=temp
			temp->a,则b->a
		虽然函数内指针交换了,但是原来的两个变量存储位置还是不变的,所以无法交换 
		*/
	}
	{
		int a=10,b=20;	
		swap5(a,b);
		std::cout<<a<<" "<<b<<std::endl;
		/*
		输出:20 10
		解释:按照引用传参,交换两个引用变量相当于交换主函数的两个变量 
		*/
	}
	return 0;
}
