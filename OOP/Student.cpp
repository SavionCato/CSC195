#include <iostream>
#include "Student.h"

void Student:: Read(){

	cout << "<-------Student------->" << endl;

	Human::Read();

	cout << "GPA: " << endl;
	cin >> gpa;
}

void Student:: Write(){

	cout << "<-------Student------->" << endl;

	Human::Write();

	cout << "GPA: "<< gpa << endl;
}