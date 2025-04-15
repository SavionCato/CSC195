#pragma once
#include <iostream>

using namespace std;
using age_t = unsigned short;

class Human {
public:

    Human() {

        cout << "Constructed\n" << endl;
        h_count++;
    };

    Human(string name, unsigned int age) :

        h_name{ name },
        h_age{ age }
    {

        cout << "Constructed\n" << endl;
    };

    ~Human() {

        cout << "Destructed\n" << endl;
    }

    string getName() { return h_name; }

    static int getCount() { return h_count; }
private:

    string h_name;
    unsigned int h_age = 0;
    static int h_count;
    static const float h_tax;
};

//void flop() {
//
//    cout << "Functions" << endl;
//}
