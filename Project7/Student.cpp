#include "Student.h"

Student::Student()
{
	name = "";
	surname = "";
	age = 0;
	gender = "man";
	group = 0;
}

Student::Student(string name, string surname, int age, string gender, int group)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->group = group;
}

Student::Student(const Student& obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->group = obj.group;
}

void printStudents(Student*ss, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ss[i].name << "\t" << ss[i].surname << "\t" << ss[i].age << "\t" << ss[i].gender << "\t" << ss[i].group << endl;
	}
}

istream& operator >> (istream& in, Student& s) {
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');
	in >> s.age >> s.gender >> s.group;
	return in;
}

bool operator==(string male, Student obj) {
	return (male == obj.gender);
}

bool operator!=(string male, Student obj) {
	return (male != obj.gender);
}

bool operator>(Student obj,Student obj2) {
	return obj.age > obj2.age;
}

bool operator<(Student obj, Student obj2) {
	return obj.age < obj2.age;
}
Student:: ~Student(){}