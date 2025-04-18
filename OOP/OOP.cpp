#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "School.h"

using namespace std;

int main(){

    School school;

    bool isRunning = true;

    while (isRunning) {

        system("cls");
        cout << "1) Add human\n";
        cout << "2) Display all humans\n";
        cout << "3) Display human by type\n";
        cout << "4) Quit\n";

        unsigned short selection;
        cin >> selection;

        switch (selection) {

        case 1:

            cout << "1) Student\n";
            cout << "2) Teacher\n";

            unsigned short type;
            cin >> type;
            school.Add(static_cast<Human::Type>(type - 1));
            break;
        case 2:

            school.DisplayAll();
            break;
        case 3:

            cout << "1) Student\n";
            cout << "2) Teacher\n";

            unsigned short dispalyType;
            cin >> dispalyType;

            school.DisplayByType(static_cast<Human::Type>(dispalyType - 1));
            break;
        case 4:

            isRunning = false;
            school.~School();
            break;
        default:
            break;
        }
    }
}