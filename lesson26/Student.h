#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
	string name;
	int school;
	int year;

public:
	Student(string name, int school, int year);

	void showInfo()const;

};

