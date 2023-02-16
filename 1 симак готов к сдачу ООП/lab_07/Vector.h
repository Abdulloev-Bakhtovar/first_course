#pragma once
#include <iostream>
using namespace std;

template<class T>
class Vector
{
private:
	int size;
	T* date;
public:
	Vector(int size, T k = 0);
	Vector(const Vector<T>& other);
	~Vector();
	Vector& operator=(const Vector<T>& other);
	T& operator[](int index);
	Vector<T>/*&*/ operator+(const T k);//+ констант в конце
	Vector<T>/*&*/ operator+(const Vector<T>& other);//arr1[i]+arr2[i]
	template<class T1>
	friend istream& operator>>(istream& in, Vector<T1>& vector);
	template<class T1>
	friend ostream& operator<<(ostream& out, const Vector<T1>& vector);
};


template<class T>
inline Vector<T>::Vector(int size, T k)
{
	this->size = size;
	date = new T[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = k;
	}
}

template<class T>
inline Vector<T>::Vector(const Vector<T>& other)
{
	size = other.size;
	date = new T[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = other.date[i];
	}
}

template<class T>
inline Vector<T>::~Vector()
{
	delete[] date;
	date = 0;
}

template<class T>
inline Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
	if (this == &other)
		return *this;
	size = other.size;
	if (date != 0)
		delete[] date;
	date = new T[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = other.date[i];
	}
	return *this;
}

template<class T>
inline T& Vector<T>::operator[](int index)
{
	if (index < size)
		return date[index];
	else
		cout << "\nError: index > size";
}

template<class T>
inline Vector<T> Vector<T>::operator+(const T k)
{
	for (int i = 0; i < size; i++)
	{
		this->date[i] += k;
	}
	return *this;
}

template<class T>
inline Vector<T> Vector<T>::operator+(const Vector<T>& other)
{
	for (int i = 0; i < size; i++)
	{
		this->date[i] += other.date[i];
	}
	return *this;
}

template<class T1>
inline istream& operator>>(istream& in, Vector<T1>& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		in >> vector.date[i];
	}
	return in;
}

template<class T1>
ostream& operator<<(ostream& out, const Vector<T1>& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		out << vector.date[i] << " ";
	}
	return out;
}
