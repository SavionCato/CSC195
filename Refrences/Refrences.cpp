#include <iostream>

using namespace std;

void func1(int* p) {

    if (p) *p = 5;
}

void Swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i1 = 35;
    int i2 = 20;
    int* p1 = &i1;
    p1 = nullptr;
    func1(p1);

    int& r1 = i1;
    r1 = 10;

    cout << "i1: " << i1 << "i2: " << i2 << endl;
    Swap(&i1,&i2);
    cout << "i1: " << i1 << "i2: " << i2 << endl;
    Swap(i1, i2);
    cout << "i1: " << i1 << "i2: " << i2 << endl; 

    cout << i1 << endl; 
    cout << &r1 << endl;
    cout << &i1 << endl;
}
