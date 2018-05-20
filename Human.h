#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	string surname, name, midname;
	int age;
public:
	Human(string surname, string name, string midname, int age);
	Human();
	~Human();
	virtual void print() =0;
	void setname(string name) { this->name = name; }
	void setsurname(string surname) { this->surname = surname; }
	void setmidname(string midname) { this->midname = midname; }
	void setage(int age) { this->age = age; }
	string getname() { return name; }
	string getsurname() { return surname; }
	string getmidname() { return midname; }
	int getage() { return age; }
};