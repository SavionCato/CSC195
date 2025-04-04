// HelloWorld1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include <iostream>
using namespace std;

struct Person{

    std::string name;
    int age;
};

int main() {

    Student student("Savion");
    student.Write();

    f();
    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;

    Person person;

    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(person) << std::endl;

    char c = 'A';
    unsigned int i = 42;

    std::cout << &i << std::endl;
    
    return 0;
}
