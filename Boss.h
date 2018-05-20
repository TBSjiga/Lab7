#pragma once
#include "Human.h"
#include <string>

class Boss :
	public Human
{
protected:
	int number_of_workers;
public:
	Boss(string &surname, string &name, string &midname, int &age, int &number_of_workers);
	Boss();
	~Boss();
	void print()
	{
		cout << "Boss" << endl << "surname:" << this->surname << endl << "name:" << this->name << endl << "midname:" << this->midname << endl << "age:" << this->age << endl
			<< "number of workers:" << this->number_of_workers<<"." << endl << endl;
	}
	void setnumber_of_workers(int &number_of_workers) { this->number_of_workers = number_of_workers; }
	int getnumber_of_workers() { return number_of_workers; }
};
