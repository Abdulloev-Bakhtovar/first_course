#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Vector
{
public:
	Vector();
	Vector(int);
	void Add(Object*);
	friend ostream& operator<<(ostream& out, const Vector& vector);
	~Vector();
private:
	Object** begin;
	int Size;
	int current;
};

