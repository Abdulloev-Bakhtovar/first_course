#include "Vector.h"

template<class T>
Vector<T>::Vector(int size, int k)
{
	this->size = size;
	date = new T[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = k;
	}
}


template <class T>
Vector<T>::~Vector(void)
{
	delete[] date;
	date = 0;
}

template <class T>
Vector<T>::Vector(const Vector& other)
{
	size = other.size;
	if (date != 0)
		delete[] date;
	date = new T[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = other.date[i];
	}
}



template <class T>
int& Vector<T>::operator[](int index)
{
	if (index < size)
		return date[index];
	else
		cout << "Error: index > size" << endl;
}

//template<class T>
//Vector<T> Vector<T>::operator+(const int)
//{
//	return Vector<T>();
//}

template <class T>
Vector<T> Vector<T>::operator+(const int k)
{
	Vector<T> temp(size,k);
	for (int i = 0; i < size; i++)
	{
		temp.date[i] += (date[i] + k);
	}
	return temp;
}

template <class T>
Vector<T>& Vector<T>::operator+(const Vector<T>& other)
{
	if (this->size == other.size)
	{
		for (int i = 0; i < size; i++)
		{
			this->date[i] += other.date[i];
		}
		return *this;
	}
	else
	{
		cout << "this->size != other.size" << endl;
	}
}

template <class T>
int Vector<T>::operator()()
{
	return this->size;
}

template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
	if (&other == this)
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

template <class T>
istream& operator>>(istream& in, Vector<T>& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		in >> vector.date[i];
	}
	return in;
}

template <class T>
ostream& operator<<(ostream& out, Vector<T>& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		out << vector.date[i] << " " << " ";
	}
	cout << endl;
	return out;
}
