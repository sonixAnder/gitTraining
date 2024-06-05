#include "PrintPars.h"

void printPersonFIO(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
}

void printPersonAGE(Person p)
{
	cout << "Возраст: " << p.age << endl;
}

void printPersonHEIGHT(Person p)
{
	cout << "Вес: " << p.height << endl;
}

void printPersonCOLOREYES(Person p)
{
	cout << "Цвет глаз: " << p.colorEyes << endl;
}
