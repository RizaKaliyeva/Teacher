#include "Teacher.h"

Teacher::Teacher()
{
	name = "";
	surname = "";
	age = 0;
	gender = "man";
	kafedra = "";
}

Teacher::Teacher(string name, string surname, int age, string gender, string kafedra)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->kafedra = kafedra;
}

Teacher::Teacher(const Teacher& obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->kafedra = obj.kafedra;
}

void printTeacher(Teacher*ss, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ss[i].name << "\t" << ss[i].surname << "\t" << ss[i].age << "\t" << ss[i].gender << "\t" << ss[i].kafedra << endl;
	}
}

istream& operator >> (istream& in, Teacher& s) {
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');
	in >> s.age >> s.gender;
	getline(in, s.kafedra, '\\');
	return in;
}

bool operator==(Teacher obj, string kafedra)
{
	return(obj.kafedra == kafedra);
}



bool operator!=(string male, Teacher obj) {
	return (male != obj.gender);
}

bool operator>(Teacher obj, Teacher obj2) {
	return obj.age > obj2.age;
}

bool operator<(Teacher obj, Teacher obj2) {
	return obj.age < obj2.age;
}
Teacher:: ~Teacher() {}