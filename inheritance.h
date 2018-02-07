#pragma once
#include "stdafx.h"
using namespace std;

// base class
class Polygon {
protected:
	int width, height;
	virtual int area() const { 
		return width * height; 
	};
public:
	void set_values(int a, int b) {
		width = a; height = b;
	}
};

// derived classes
class Rectangle : public Polygon {
public:
	int area() const override {
		return width * height;
	}
};

class Triangle : public Polygon {
public:
	int area() const override {
		return width * height / 2;
	}
};
