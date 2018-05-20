#include "Boss.h"
#include <string>

Boss::Boss(string &surname, string &name, string &midname, int &age, int &number_of_workers)
{
	//Human::Human(surname, name, midname, age);
	this->age = age;
	this->midname = midname;
	this->name = name;
	this->surname = surname;
	this->number_of_workers = number_of_workers;
}

Boss::Boss()
{
	//Human::Human();
	this->age = 0;
	this->midname = "";
	this->name = "";
	this->surname = "";
	this->number_of_workers = 0;
}

Boss::~Boss(){}

//void print(Boss boss)
//{
//	cout << "Student" << endl << "surname:" << boss.getsurname() << endl << "name:" << boss.getname() << endl << "midname:" << boss.getmidname() << endl << "age:" << boss.getage() << endl
//		<< "number of workers:" << boss.getnumber_of_workers() << endl;
//}
