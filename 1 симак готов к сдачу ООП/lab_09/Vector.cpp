#include "Vector.h"
#include "error.h"

Vector::Vector(int size)
{
	if (size > maxSize)
		throw MaxSizeError();
	this->size = size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
	{
		beg[i] = 0;
	}
}

Vector::Vector(int size, int* mas)
{
	if (size > maxSize)
		throw MaxSizeError();
	this->size = size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
	{
		beg[i] = mas[i];
	}
}

Vector::Vector(const Vector& v)
{
	size = v.size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
	{
		beg[i] = v.beg[i];
	}
}

Vector::~Vector()
{
	if (beg != 0)
		delete[] beg;
}

const Vector& Vector::operator=(const Vector& v)
{
	if (&v == this) return *this;
	if (beg != 0) delete[] beg;
	size = v.size;
	beg = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		beg[i] = v.beg[i];
	}
	return *this;
}

int Vector::operator[](int i)
{
	if (i < 0)
		throw IndexError1();
	if (i > size)
		throw IndexError2();
	return beg[i];
}

Vector Vector::operator++()
{
	size++;
	int* newBeg = new int[size];
	newBeg[0] = 999;
	for (int i = 1,j=0; i < size; i++,j++)
	{
		newBeg[i] = beg[j];
	}
	delete[] beg;
	beg = newBeg;
	return *this;
}

Vector Vector::operator++(int)
{
	int* newBeg = new int[size+1];
	for (int j = 0; j < size; j++)
	{
		newBeg[j] = beg[j];
	}
	newBeg[size] = 555;
	size++;
	delete[] beg;
	beg = newBeg;
	return *this;
}

istream& operator>>(istream& in, Vector& v)
{
	for (int i = 0; i < v.size; i++)
	{
		cout << ">";
		in >> v.beg[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Vector& v)
{
	if (v.size == 0)
		out << "Empty\n";
	else
	{
		for (int i = 0; i < v.size; i++)
		{
			out << v.beg[i] << " ";
		}
		out << endl;
	}
	return out;
}
