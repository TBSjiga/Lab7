#include "Human.h"

Human::Human()
{
	this->age = 0;
	this->midname = "";
	this->name = "";
	this->surname = "";
}

Human::Human(string &surname, string &name, string &midname, int &age)
{
	this->age = age;
	this->midname = midname;
	this->name = name;
	this->surname = surname;
}

Human::~Human()
{
}
