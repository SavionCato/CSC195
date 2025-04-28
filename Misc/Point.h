#pragma once
#include <iostream>

using namespace std;

template<typename T>


class Point {
public:

	Point() = default;
	Point(T a, T b) :
	
		x{a},
		y{b}
	{

	}

	Point<T> operator + (const Point<T>& other) const {

		return Point<T>(x + other.x, y + other.y);
	}

	Point<T> operator - (const Point<T>& other) const {

		return Point<T>(x - other.x, y - other.y);
	}

	Point<T> Add(const Point<T>& other) const {
		
		return Point<T>(x + other.x, y + other.y);
	}

	T getX() const { return x; }
	T getY() const { return y; }
private:

	int x = 0;
	int y = 0;
};
