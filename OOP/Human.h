#pragma once
#include <iostream>

using namespace std;
using age_t = unsigned short;

class Human {
public:

    enum class Type {

        STUDENT,
        Teacher
    };

    enum class Character {

        Sorcerror,
        Worriar,
        Death
    };

    enum class State {

        Idle,
        Patrol,
        Attack,
        Death
    };

    Human() {

        cout << "Constructed\n" << endl;
        h_count++;
    };

    Human(string name, unsigned short age) :

        h_name{ name },
        h_age{ age }
    {

        cout << "Constructed\n" << endl;
    };

    ~Human() {

        cout << "Destructed\n" << endl;
    }

    virtual void Read();
    virtual void Write();

    string getName() { return h_name; }

    static int getCount() { return h_count; }

    virtual Type getType() = 0;
private:

    string h_name;
    unsigned short h_age = 0;
    static int h_count;
    static const float h_tax;
};

//void flop() {
//
//    cout << "Functions" << endl;
//}
