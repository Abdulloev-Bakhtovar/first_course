#include "Vector.h"

Vector::Vector()
{
	date = 0;
	size = 0;
}

Vector::Vector(int size, int k = 0)
{
	this->size = size;
	date = new int[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = k;
	}
	//beg.elem = &date[0];
	
}

Vector::~Vector()
{
	delete[] date;
	date = 0;
}

Vector::Vector(const Vector& other)
{
	size = other.size;
	if (date != 0)
		delete[] date;
	date = new int[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = other.date[i];
	}
}

int& Vector::operator[](int index)
{
	if (index < size)
		return date[index];
	/*else
		cout << "Error: index > size" << endl;
	return ;*/
}

Vector Vector::operator+(const int k)
{
	Vector temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.date[i] += (date[i] + k);
	}
	return temp;
}

Vector& Vector::operator+(const Vector& other)
{
	if (this->size == other.size)
	{
		Vector temp;
		temp.size = other.size;
		for (int i = 0; i < size; i++)
		{
			temp.date[i] = this->date[i] + other.date[i];//a+=b;
		}
		return temp;
	}
	/*else
	{
		cout << "this->size != other.size" << endl;
		return 0;
	}*/
}

Vector& Vector::operator=(const Vector& other)
{
	if (&other == this)
		return *this;
	size = other.size;
	if (date != 0)
		delete[] date;
	date = new int[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = other.date[i];
	}
	return *this;
}

istream& operator>>(istream& in, Vector& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		in >> vector.date[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Vector& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		out << vector.date[i] << " " << " ";
	}
	cout << endl;
	return out;
}
