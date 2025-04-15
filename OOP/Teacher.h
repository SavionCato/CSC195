#pragma once
#include <iostream>
#include "Human.h"

using namespace std;

class Teacher : public Human{
public:

	Teacher(){}
	Teacher(string name, int age, int classrom) :

		Human{ name , age }
	{

	}
};
