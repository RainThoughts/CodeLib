#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<string>

class GradeBook
{
	public:
		explicit GradeBook();
		explicit GradeBook(std::string, std::string);
		void setCourseName(std::string course_name_);
		std::string getCourseName(void) const;
		void setInstructorName(std::string instructor_name_);
		std::string getInstructorName(void) const;
		void displayMessage(void) const;
	private:
		std::string course_name;
		std::string instructor_name;
};

#endif
