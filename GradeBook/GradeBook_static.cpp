#include "GradeBook.h"
#include <iostream>
#include <string>
using namespace std;

void GradeBook::inputGrades() {
    std::cout << "Enter the name of students and the letter A, B, C, D, E, F, representing the grades of the students. EOF(windows ctrl^Z, linux ctrl^d) to quit." << std::endl;
    std::string name_;
    char grade_;
    while(std::cin >> name_) {
        std::cin >> grade_;
        switch (grade_) {
            case 'a':
            case 'A':
            {
                aCount++;
                student.push_back(Student(name_, 'A'));
                break;
            }
            case 'b':
            case 'B':
            {
                bCount++;
                student.push_back(Student(name_, 'B'));
                break;
            }
            case 'c':
            case 'C':
            {
                cCount++;
                student.push_back(Student(name_, 'C'));
                break;
            }
            case 'd':
            case 'D':
            {
                dCount++;
                student.push_back(Student(name_, 'D'));
                break;
            }
            case 'e':
            case 'E':
            {
                eCount++;
                student.push_back(Student(name_, 'E'));
                break;
            }
            case 'f':
            case 'F':
            {
                fCount++;
                student.push_back(Student(name_, 'F'));
                break;
            }
            default:
            {
                std::cout << "Invaild input. Try again." << std::endl;
            }
        }
    }
}

void GradeBook::displayGradeReport(void) const {
    std::cout << "Number of students who received each letter grade:\n";
    std::cout << "A: " << aCount << std::endl;
    std::cout << "B: " << bCount << std::endl;
    std::cout << "C: " << cCount << std::endl;
    std::cout << "D: " << dCount << std::endl;
    std::cout << "E: " << eCount << std::endl;
    std::cout << "F: " << fCount << std::endl;
    return;
}