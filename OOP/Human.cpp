#include "Human.h"

int Human::h_count = 0;
const float Human::h_tax = 0.0825f;

void Human::Read() {

	cout << "Name: " << endl;
	cin >> h_name;
	cout << "Age: " << endl;
	cin >> h_age;
}

void Human::Write() {

	cout << "\n";
	cout << h_name << endl;
	cout << h_age << endl;
}