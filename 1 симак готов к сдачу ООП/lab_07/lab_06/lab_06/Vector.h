#pragma once
#include <iostream>
#include <iostream>
using namespace std;
class Iterator;
class Vector
{
private:
	int size;
	int* date;
	Iterator* beg;
	Iterator* end;
public:
	Vector();
	Vector(int, int);
	~Vector();
	Vector(const Vector&);
	Vector operator+(const int);//+ констант в конце
	Vector& operator+(const Vector&);//arr1[i]+arr2[i]
	int& operator[](int);
	Vector& operator=(const Vector&);
	//Iterator first() { return beg; }//err
	//Iterator last() { return end; }//err
	friend istream& operator>>(istream&, Vector&);
	friend ostream& operator<<(ostream&, Vector&);
};