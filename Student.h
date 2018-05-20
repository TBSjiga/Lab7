#pragma once
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
class Student :
	public Human
{
private:
	bool on_lesson;
public:
	Student(string surname, string name, string midname, int age, bool on_lesson);
	Student();
	~Student();
	void print()
	{
		cout << "Student" << endl << "surname:" << this->surname << endl << "name:" << this->name << endl << "midname:" << this->midname << endl << "age:" << this->age << endl;
		if (this->on_lesson) cout << "on lesson.";
		else cout << "not on lesson." << endl;
	}
	void seton_lesson(bool on_lesson) { this->on_lesson = on_lesson; }
	bool geton_lesson() { return on_lesson; }
};