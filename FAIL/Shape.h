#pragma once
#include <iostream>

using namespace std;

class Shape {
public:
    Shape() {}
    ~Shape() {}

    virtual float Area() { return 0;};
};

