#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(string name) {
	GradeBook::set_course_name(name);
}

void GradeBook::set_course_name(string name) {
	GradeBook::course_name = name;
}

void GradeBook::display_message() {
	std::cout << "Welcome to the grade book of " << GradeBook::get_course_name() << "!\n";
}

string GradeBook::get_course_name() {
	return GradeBook::course_name;
}