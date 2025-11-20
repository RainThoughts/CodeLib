/*
question 1 : 由于switch的穿透机制，程序仍然会执行case3的代码
question 2 : 程序已经考虑default的情况, 见下面程序的default
question 3 : 见下面程序,将外层循环改成了do...while保证至少进行一次输入
question 4 : 如果采用int型,那么计算时会截尾,导致输出错误
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void salary_calculator() {
    int employee_type;
    std::cout << "Enter employee code : ";//prompt the user to input the employee code
    std:: cin >> employee_type; 
    do {//press ctrl+z to quit
        switch(employee_type) {
            double salary;
            case 1:
                std::cout << "Enter manager's fixed weekly salary: ";
                std::cin >> salary;
                std::cout << "Manager's salary is: $" << std::fixed << std::setprecision(2) << salary << std::endl;
                break;
            case 2:
                std::cout << "Enter hourly rate: ";
                double rate;
                std::cin >> rate;
                std::cout << "Enter hours worked: ";
                double worked;
                std::cin >> worked;
                salary = std::min(worked, 40.0) * rate + (worked - std::min(worked, 40.0)) * rate * 1.5;
                std::cout <<"Worker's salary is: $" << std::fixed << std::setprecision(2) << salary << std::endl;
                break;
            case 3:
                std::cout << "Enter gross weekly sales: ";
                double sales;
                std::cin >> sales;
                salary = 250.0 + sales * .057;
                std::cout << "Commission worker's salary is: " << std::fixed << std::setprecision(2) << salary << std::endl;
                break;
            case 4:
                std::cout << "Enter number of items produced: ";
                double items;
                std::cin >> items;
                std::cout << "Enter fixed price per item: ";
                double price;
                std::cin >> price;
                salary = items * price;
                std::cout << "Pieceworker's salary is: $" << std::fixed << std::setprecision(2) << salary << std::endl;
                break;
            default:
                std::cout << "Invaild input, try again." << std::endl;
        }
        std::cout << "Enter employee code : ";//prompt the user to input the employee code
    }while(std::cin>>employee_type);
    return;
}

int main() {
    salary_calculator();
    return 0;
}