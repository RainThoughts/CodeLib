#include "GradeBook.h"

int main() {
    GradeBook gradebook1("CS101 C++ Programming");
    gradebook1.displayMessage();
    gradebook1.inputGrades();
    gradebook1.displayGradeReport();
    return 0;
}