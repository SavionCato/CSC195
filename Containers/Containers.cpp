#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

void printDays() { //Prints the days of the week

    array<string, 7> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for (int i = 0; i < days.size(); i++) {
        cout << days[i] << endl;
    }
}

void printAges() { //Prints random ages

    vector<int> ages = {23,69,87,12,36,28};

    ages.push_back(15);
    ages.push_back(21);

    ages.pop_back();

    for (int i = 0; i < ages.size(); ++i) {

        cout << ages[i] << " " << endl;
    }
}

void printFruitBasket() { 

    list<string> fruits = {"Banana", "Coconut", "Durian"};

    fruits.insert(fruits.begin(), "Dragon Fruit");
    fruits.insert(fruits.end(), "Kiwi");

    fruits.remove("Banana");

    for (auto iter = fruits.begin(); iter != fruits.end(); iter++) {

        cout << *iter << endl;
    }
}

void printGroceries() {

    map<string, int> groceries;

    groceries["Bread"] = 45;
    groceries["Milk"] = 37;
    groceries["Eggs"] = 12;

    groceries["Eggs"] = 1;

    for (auto iter = groceries.begin(); iter != groceries.end(); iter++) {

        cout << iter->first << " " << iter->second << endl;
    }
}

int main(){

   
    printDays();
    printAges();
    printFruitBasket();
    printGroceries();

    return 0;
}
