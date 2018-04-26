#pragma once
#include "Library.h"
#include "Student.h"
#include "Teacher.h"
class Student;
class Teacher;


class exam {
private:
	string subject;
	string teacher_sname;
	string student_sname;
	double grade;
public:
	exam() = default;
	exam(string, string, string, double);
	exam(string, Student sobj, Teacher tobj, double);
	exam(const exam&);
	void create_exam(string Subject, Student sobj, Teacher tobj,double grade);
	virtual ~exam();

	friend void printExam(exam*, int);

};
