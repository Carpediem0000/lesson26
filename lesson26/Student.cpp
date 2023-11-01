#include "Student.h"

Student::Student(string name, int school, int year)
{
	this->name = name;
	this->school = school;
	this->year = year;
}

void Student::showInfo() const
{
	cout << name << " " << school << " " << year << endl;
}
