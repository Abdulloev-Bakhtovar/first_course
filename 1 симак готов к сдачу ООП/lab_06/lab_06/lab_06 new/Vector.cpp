#include "Vector.h"

//Vector::Vector()
//{
//	date = 0;
//	size = 0;
//}

Vector::Vector(int size, int k)
{
	this->size = size;
	date = new int[size];
	for (int i = 0; i < size; i++)
	{
		date[i] = k;
	}
	beg.elem = &date[0];
	end.elem = &date[size-1];
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
	beg = other.beg;
	end = other.end;
}

int& Vector::operator[](int index)
{
	if (index < size)
		return date[index];
	/*else
		cout << "Error: index > size" << endl;
	return ;*/
}

Vector& Vector::operator+(const int k)
{
	//Vector temp(size,0);
	for (int i = 0; i < size; i++)
	{
		date[i] += k;
	}
	return *this;
}

Vector& Vector::operator+(const Vector& other)
{
	if (this->size == other.size)
	{
		//Vector temp(other.size,0);
		for (int i = 0; i < size; i++)
		{
			/*temp.date[i] =*/ this->date[i] += other.date[i];//a+=b;
		}
		return *this;
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
	beg = other.beg;
	end = other.end;
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

