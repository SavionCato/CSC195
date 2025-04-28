#include <iostream>
#include "Fraction.h"

using namespace Mathlib;


int main(){

    Mathlib::Fraction<int> fraction1(18, 5);
    cout << fraction1 << endl;

    Mathlib::Fraction<int> fraction2(15, 6);
    cout << fraction2 << endl;
    fraction2.Simplify();
    cout << "simplify: " << fraction2 << endl;

    cout << fraction1 << " == " << fraction2 << "result: " << (fraction1 == fraction2) << endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Mathlib::Fraction<int> fraction3;
    cout << "input fraction (numerator - denominator): \n";
    cin >> fraction3;
    cout << fraction3 << endl;
    cout << fraction3.toFloat() << endl;

    return 0;
}