#include "Student.h"
#include <string>

Student::Student(string &surname, string &name, string &midname, int &age, bool &on_lesson)
{
	//Human::Human(surname, name, midname, age);
	this->age = age;
	this->midname = midname;
	this->name = name;
	this->surname = surname;
	this->on_lesson = on_lesson;
}

Student::Student()
{
	//Human::Human();
	this->age = 0;
	this->midname = "";
	this->name = "";
	this->surname = "";
	this->on_lesson = 0;
}


Student::~Student(){}

//void print(Student student)
//{
//	cout << "Student" << endl << "surname:" << student.getsurname() << endl << "name:" << student.getname() << endl << "midname:" << student.getmidname() << endl << "age:" << student.getage() << endl;
//	if (student.geton_lesson()) cout << "on lesson.";
//	else cout << "not on lesson." << endl;
//}
