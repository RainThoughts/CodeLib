#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

class Employee {
private:
	static const int Month = 12;
	string name;
	double salary[Month];
public:
	explicit Employee (string name_, const double salary_[]) {
		setName(name_);
		for(int i = 0; i < Month; i++) {
			salary[i] = salary_[i];
		}
	}
	void setName(string name_) {
		name = name_;
	}
	string getName() {
		return name;
	}
	double totalSalary() {
		double sum = 0;
		for(int i = 0; i < Month; i++) {
			sum += salary[i];
		}
		return sum;
	}
	double maxSalary() {
		double maxS = 0;
		for(int i = 0; i < Month; i++) {
			maxS = max(maxS, salary[i]);
		}
		return maxS;
	}
	void display() {
		cout << name << " :\n";
		cout << "Total salary: " << totalSalary() << endl;
		cout << "Maximum salary: " << maxSalary() << endl;
	}
};

int main() {
	double salary1[] = {1000,2000,3000,4000,2000,3000,1000,2000,3000,4000,2000,3000};
	double salary2[] = {3000,1000,2000,2000,4000,3000,3000,1000,2000,2000,4000,3000};
	Employee e1("Jack", salary1);
	Employee e2("Rose", salary2);
	e1.display();
	e2.display();
	return 0;
}
