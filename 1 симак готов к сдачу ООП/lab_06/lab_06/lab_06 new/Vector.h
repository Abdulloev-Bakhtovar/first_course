#pragma once
#include <iostream>
#include <iostream>
using namespace std;

class Iterator
{
	friend class Vector;
	int* elem;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator==(const Iterator& it) { return elem == it.elem; }
	void operator--() { --elem; }
	int& operator*()const { return *elem; }
};

class Vector
{
private:
	int size;
	int* date;
	Iterator beg;
	Iterator end;
public:
	//Vector();
	Vector(int, int k = 0);
	~Vector();
	Vector(const Vector&);
	Vector& operator+(const int);//+ констант в конце
	Vector& operator+(const Vector&);//arr1[i]+arr2[i]
	int& operator[](int);
	Vector& operator=(const Vector&);
	Iterator first() { return beg; }//err
	Iterator last() { return end; }//err
	friend istream& operator>>(istream&, Vector&);
	friend ostream& operator<<(ostream&, Vector&);
};


