#include "Student.h"
#include "Teacher.h"

int main() {
	Student* s;
	int sn, tn, en;
	exam* es;
	ifstream in_file("in.txt");
	//cout << "Enter number of students" << endl;
	in_file >> sn;
	s = new Student[sn];

	for (int i = 0; i < sn; i++)
	{
		//cout << "Enter name,surname,age,gender and group"<<endl;
		in_file >> s[i];
	}
	cout << "\nStudents\n" << endl;
	printStudents(s, sn);

	//cout << ("man" != s[0]) << endl;
	in_file.close();
	Teacher* c;
	ifstream inteacher_file("inteacher.txt");
	ofstream out_file("exams.txt");
	inteacher_file >> tn;
	c = new Teacher[tn];
	int i = 0;
	/*for (int i = 0; i < n; i++)
	{
		inteacher_file >> c[i];
	}*/
	cout << "\nTeachers\n" << endl;
	while (!inteacher_file.eof()) {
		inteacher_file >> c[i++];
	}
	
	printTeacher(c, tn);
	
	en = sn*tn;
	es = new exam[en];
	string subject;
	int k = 0;
	double grade;
	for (int i = 0; i < tn; i++)
	{
		cout << "Enter subject for current teacher" << endl;
		cin >> subject;
		for (int j = 0; j < sn; j++)
		{
			cout << "Enter grade for the current student:" << endl;
			cin >> grade;
			//exam e(subject, s[j].getSname(), c[i].getSname(), grade);
			es[k++].create_exam(subject, s[j], c[i], grade);
		}
	}
	
	cout << "Exam list" << endl;
	printExam(es, en);
	int choice;
	cout << "Choose a task:" << endl;


	delete[]c;
	delete[]s;
	delete[]es;

	system("pause");
	return 0;

	

}