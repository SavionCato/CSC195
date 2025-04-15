#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& num) {

	num = num * num;
}

void Double(int* num) {

	*num = *num * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	int plugs =  5;
	int& refPlug = plugs;

	// output the int variable
	cout << refPlug << endl;

	// set the int reference to some number
	refPlug = 5;
	// output the int variable
	cout << refPlug << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	//Answer: It still output the number of plugs

	// output the address of the int variable
	cout << &plugs << endl;
	// output the address of the int reference
	cout << &refPlug << endl;
	// are the addresses the same or different? (insert answer)
	//Answer: Same

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	Square(plugs);

	// output the int variable to the console
	cout << plugs << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	int* pointint = nullptr;
	pointint = &plugs;

	// output the value of the pointer
	cout << pointint << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// Answer: 00000002102FF814
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *pointint << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointint);

	// output the dereference pointer
	cout << *pointint << endl;
	// output the int variable created in the REFERENCE section
	cout << plugs << endl;
	// did the int variable's value change when using the pointer?
	//Answer: Yes

}