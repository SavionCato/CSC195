#pragma once
#include <iostream>
#include "Human.h"
#include <vector>

class School {
public:

	~School();

	void Add(Human :: Type type);
	void DisplayAll();
	void DisplayByType(Human::Type type);
private:

	vector<Human*> inhabitenets;
};
