
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "Library.h"
#include "Exam.h"

class Student
{
	string name;
	string surname;
	int age;
	string gender;
	int group;
public:
	Student();
	Student::Student(string name, string surname, int age, string gender, int group);
	Student(const Student& obj);
	string getSname() { return surname; }
	virtual ~Student();
	
	friend class exam;
	friend void printStudents(Student*ss, int size);
	friend istream& operator >> (istream& in, Student& s);
	friend bool operator==(string male, Student obj);
	friend bool operator!=(string male, Student obj);
	friend bool operator>(Student obj,Student obj2);
	friend bool operator<(Student obj, Student obj2);
};


#endif


