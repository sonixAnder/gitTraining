#include "PrintPars.h"

void printPersonPars(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
	cout << "Возраст: " << p.age << endl;
}

void printPersonFIO(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
}

void printPersonAGE(Person p)
{
	cout << "Возраст: " << p.age << endl;
}
