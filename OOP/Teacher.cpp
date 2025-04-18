#include "Teacher.h"

void Teacher::Read(){


	cout << "<-------Teacher------->" << endl;

	Human::Read();

	cout << "Classname: " << endl;
	cin >> classname;

	cout << "Classroom: " << endl;
	cin >> classroom;
}

void Teacher::Write(){

	cout << "<-------Teacher------->" << endl;

	Human::Write();

	cout << "Classname: " << classname << endl;
	cout << "Classroom: " << classroom << endl;
}
