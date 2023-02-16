#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Pair :public Object
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	virtual ~Pair();
	//модификаторы
	void setFirst(int);
	void setSecond(int);
	//селекторы
	int getFirst() { return first; }
	int getSecond() { return second; }
	Pair& operator=(const Pair&);
	friend istream& operator>>(istream&, Pair&);
	friend ostream& operator<<(ostream&, Pair&);
	void Show();
};

