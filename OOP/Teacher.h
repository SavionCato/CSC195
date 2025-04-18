#pragma once
#include <iostream>
#include "Human.h"


class Teacher : public Human{
public:

	Teacher(){
	
		cout << "Teacher Constructed\n" << endl;
	}
	Teacher(string name, unsigned short age, string classname, unsigned short classroom) :

		Human{ name , age },
		classname{ classname},
		classroom{classroom}
	{

		cout << "Teacher Constructed\n" << endl;
	}

	void Read() override;
	void Write() override;
	Type getType()override { return Type::Teacher;}
private:

	string classname;
	unsigned short classroom;

};
