#include "School.h"
#include "Student.h"
#include "Teacher.h"

School::~School() {

	cout << "School Deconstructed\n" << endl;

	for (Human* human : inhabitenets) {

		delete human;
	}

	inhabitenets.clear();
};

void School::Add(Human::Type type){

	Human* human = nullptr;

	switch (type) {

	case Human::Type::STUDENT:
		human = new Student;
		break;
	case Human::Type::Teacher:
		human = new Teacher;
		break;
	default:
		break;
	}

	human->Read();
	inhabitenets.push_back(human);
}

void School::DisplayAll(){

	for (Human* human : inhabitenets) {

		human->Write();
	}
}

void School::DisplayByType(Human::Type type){

	switch (type) {
		
	case Human::Type:: STUDENT:
		
		for (Human* human : inhabitenets) {

			if (human->getType() == Human::Type::STUDENT) {

				human->Write();
			}
		}
		break;
	case Human::Type::Teacher:

		for (Human* human : inhabitenets) {

			if (human->getType() == Human::Type::Teacher) {

				human->Write();
			}
		}
		break;
	default:
		break;
	}


}
