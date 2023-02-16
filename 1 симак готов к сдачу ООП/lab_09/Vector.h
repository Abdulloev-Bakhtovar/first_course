#pragma once
#include <iostream>
using namespace std;
const int maxSize = 20;
class Vector
{
	int size;
	int* beg;
public:
	Vector() { size = 0; beg = 0; }
	Vector(int size);
	Vector(int size, int* mas);
	Vector(const Vector& v);
	~Vector();
	const Vector& operator=(const Vector& v);
	int operator[](int i);
	//Vector operator+(int a);
	Vector operator++();
	Vector operator++(int);
	friend istream& operator >>(istream& in, Vector& v);
	friend ostream& operator <<(ostream& out, Vector& v);
};

