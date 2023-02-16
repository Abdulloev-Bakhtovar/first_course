#include "Rightangled.h"

Rightangled::Rightangled() :Pair()
{
}

Rightangled::Rightangled(int first, int second) :Pair(first, second)
{
}

Rightangled::Rightangled(const Rightangled& other)
{
	first = other.first;
	second = other.second;
}

Rightangled& Rightangled::operator=(const Rightangled& other)
{
	if (&other == this)
		return *this;
	this->first = other.first;
	this->second = other.second;
	return *this;
}

int Rightangled::hypotenuses()
{
	return (first* first + second * second);
}

Rightangled::~Rightangled()
{
}

istream& operator>>(istream& in, Rightangled& rightangled)
{
	cout << "first: ";
	in >> rightangled.first;
	cout << "second: ";
	in >> rightangled.second;
	return in;
}

ostream& operator<<(ostream& out, Rightangled& rightangled)
{
	out << "first: " << rightangled.first << endl;
	out << "second: " << rightangled.second << endl;
	return out;
}
