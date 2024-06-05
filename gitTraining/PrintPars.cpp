#include "PrintPars.h"

void printPersonFIO(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
}

void printPersonAGE(Person p)
{
	cout << "Возраст: " << p.age << endl;
}
