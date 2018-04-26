#ifndef _TEACHER_H_
#define _TEACHER_H_
#include "Library.h"
#include "Exam.h"

class Teacher
{
	string name;
	string surname;
	int age;
	string gender;
	string kafedra;
public:
	Teacher();
	Teacher::Teacher(string name, string surname, int age, string gender, string kafedra);
	Teacher(const Teacher& obj);
	string getSname() { return surname; }
	virtual ~Teacher();

	friend class exam;
	friend void printTeacher(Teacher*ss, int size);
	friend istream& operator >> (istream& in, Teacher& s);
	//friend bool operator==(string male, Teacher obj);
	friend bool operator!=(string male, Teacher obj);
	friend bool operator>(Teacher obj, Teacher obj2);
	friend bool operator<(Teacher obj, Teacher obj2);
	friend bool operator==(Teacher obj, string kafedra);
};

#endif