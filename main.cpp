#include "Human.h"
#include "Student.h"
#include "Boss.h"

int main()
{
	Student *student = new Student;
	Boss *boss = new Boss;

	string surname, name, midname;
	int age, number_of_workers;
	bool on_lesson;

	cout << "_____________________________________________________________________________" << endl << "Enter info about boss (surname, name, midname, age and number of his workers):" << endl;
	cin >> surname >> name >> midname >> age >> number_of_workers;
	boss->setname(name);
	boss->setage(age);
	boss->setmidname(midname);
	boss->setnumber_of_workers(number_of_workers);
	boss->setsurname(surname);

	cout << "_____________________________________________________________________________" << endl << "Enter info about student (surname, name, midname, age and is on lesson):" << endl;
	cin >> surname >> name >> midname >> age >> on_lesson;
	student->setname(name);
	student->setage(age);
	student->setmidname(midname);
	student->seton_lesson(on_lesson);
	student->setsurname(surname);
	cout << "_____________________________________________________________________________" << endl;

	boss->print();
	student->print();
	cout << endl << "_____________________________________________________________________________" << endl;
	system("pause");
}