#pragma once
#include <iostream>
#include "Human.h"

using namespace std;

class Student : public Human{
public:

	Student(){

		cout << "Student Constructed\n" << endl;
	}
	Student(string name, int age, float gpa) :
		Human{name, age},
		gpa{gpa}
	{

		cout << "Student Constructed\n" << endl;
	}

	float getGPA() { return gpa; }
private:

	float gpa = 2.78f;
};
