#pragma once
#include <iostream>
#include <iostream>
using namespace std;
template <class T>
class Iterator;
template <class T>
class Vector
{
private:
	int size;
	T* date;
	Iterator<T>* beg;
	Iterator<T>* end;
public:
	Vector(int, int);
	~Vector();
	Vector(const Vector&);
	Vector<T> operator+(const int k);
	Vector<T>& operator+(const Vector<T>& other);
	int operator()();
	int& operator[](int);
	Vector<T>& operator=(const Vector<T>&);
	friend istream& operator>>(istream&, Vector<T>&);
	friend ostream& operator<<(ostream&, Vector<T>&);
};