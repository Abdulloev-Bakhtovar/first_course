#include "Pair.h"

Pair::Pair()
{
	first = second = 0;
}

Pair::Pair(int first, int second)
{
	this->first = first;
	this->second = second;
}

Pair::Pair(const Pair& other)
{
	this->first = other.first;
	this->second = other.second;
}

Pair::~Pair()
{

}
//модификаторы
void Pair::setFirst(int first)
{
	this->first = first;
}

void Pair::setSecond(int second)
{
	this->second = second;
}

int Pair::product()
{
	return (first * second);
}

Pair& Pair::operator=(const Pair& other)
{
	if (&other == this)
		return *this;
	this->first = other.first;
	this->second = other.second;
	return *this;
}

istream& operator>>(istream& in, Pair& pair)
{
	cout << "first: ";
	in >> pair.first;
	cout << "second: ";
	in >> pair.second;
	return in;
}

ostream& operator<<(ostream& out, Pair& pair)
{
	out << "first: " << pair.first << endl;
	out << "second: " << pair.second << endl;
	return out;
}
