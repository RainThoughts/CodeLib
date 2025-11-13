#include<iostream>
using namespace std;

class GradeBook {
public:
	GradeBook(string name);
	void set_course_name(string name);
	string get_course_name();
	void display_message();
private:
	string course_name;
};