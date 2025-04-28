#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Point.h"

#define NAME "Savion"
#define PI 3.14159f
#define XBOX
#define PS
#define SWITCH

using namespace std;
using names_t = vector<string>;

namespace math {

    template<typename T1 , typename T2>

    T1 max(T1 a, T2 b) {

        if (a > b) {

            return a;
        }
        else {

            return b;
        }
    };

    using psi = Point<int>;
    using psf = Point<float>;
}

void print(const names_t& names){

    for (string name : names) {

        cout << name << endl;
    }
}

template<typename T>

void Streamout(ostream& out, const T thing) {

    out << thing << endl;
}

void Streamin(istream& in, string& text) {

    in >> text;
}

int main() {

#ifdef _DEBUG

    cout << "pro Start\n";
#endif

#ifdef XBOX

#endif // XBOX

#ifdef PS

#endif // PS



    Streamout(cout, "davey");
    ofstream fstream("Text.txt");
    Streamout(fstream, "Hello");
    fstream.close();

    string text;
    ifstream infstream("text.txt");
    
    if (infstream.is_open()) {

        Streamin(infstream, text);
        cout << text << endl;
    }

    Point <int> p1(45, 74);
    Point <int> p2(69, 29);
    Point <int> p3;
    p3 = p1.Add(p2);
    
    /*cout << p3.getX() << "" << p3.getY() << endl;
    cout << p1.getX() << "" << p1.getY() << endl;
    cout << math::max(2,6) << endl;

    names_t names{ "Barry", "Alex", "Wesker" };
    print(names); */
}