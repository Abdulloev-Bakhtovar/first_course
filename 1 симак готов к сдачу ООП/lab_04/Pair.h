#pragma once
#include <iostream>
using namespace std;

class Pair
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair();
	//������������
	void setFirst(int);
	void setSecond(int);
	//���������
	int getFirst() { return first; }
	int getSecond() { return second; }
	int product();
	Pair& operator=(const Pair&);
	friend istream& operator>>(istream&, Pair&);
	friend ostream& operator<<(ostream&, Pair&);
};

