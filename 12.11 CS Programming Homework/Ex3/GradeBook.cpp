#include "GradeBook.h"
#include <string>
#include <iostream>

GradeBook::GradeBook() {
	
}

GradeBook::GradeBook(std::string course_, std::string instructor_ = "") {
	setCourseName(course_);
	setInstructorName(instructor_);
}

void GradeBook::setCourseName(std::string course_name_) {
	course_name = course_name_;
}

void GradeBook::setInstructorName(std::string instructor_name_) {
	instructor_name = instructor_name_;
}

std::string GradeBook::getCourseName() const {
	return course_name;
}

std::string GradeBook::getInstructorName() const {
	return instructor_name;
}

void GradeBook::displayMessage(void) const {
	std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
	std::cout << "This course is presented by: " << getInstructorName() << std::endl;
}


