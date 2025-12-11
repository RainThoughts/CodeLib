#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook() : aCount(0), bCount(0), cCount(0), dCount(0), eCount(0), fCount(0) {}

GradeBook::GradeBook(std::string course_name) {
    aCount = bCount = cCount = dCount = eCount = fCount = 0;
    GradeBook::setCourseName(course_name);
}

void GradeBook::displayMessage(void) const {
    std::cout << "Welcome to GradeBook for " << GradeBook::getCourseName() << std::endl;
}

std::string GradeBook::getCourseName(void) const {
    return GradeBook::course_name;
}

void GradeBook::setCourseName(std::string course_name) {
    if(course_name.size() <= 25) {
        GradeBook::course_name = course_name;
    } else {
        std::cerr << "WARNING : Name " << course_name << " exceeds maximum length (25).\nLimiting courseName to the first 25 characters." << std::endl; 
    }
}