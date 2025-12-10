#ifndef GradeBook_H
#define GradeBook_H

#include <string>
#include <vector>

class GradeBook {
private:
    std::string course_name;
    int aCount, bCount, cCount, dCount, eCount, fCount;
    class Student {
    public://!!!
        explicit Student (std::string name_, char grade_) : name(name_), grade(grade_) {}
        std::string name;
        char grade;
    };
    std::vector<Student> student;
public:
    explicit GradeBook();
    explicit GradeBook(std::string course_name);
    void setCourseName(std::string course_name);
    std::string getCourseName(void) const;
    void displayMessage(void) const;
    void inputGrades(void);
    void displayGradeReport(void) const;
};

#endif