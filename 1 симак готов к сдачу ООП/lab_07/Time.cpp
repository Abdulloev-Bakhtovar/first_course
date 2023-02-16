#include "Time.h"

Time::Time()
{
	min = sec = 0;
}

Time::Time(int min, int sec)
{
	this->min = min;
	this->sec = sec;
}

Time::Time(const Time& other)
{
	min = other.min;
	sec = other.sec;
}

Time::~Time()
{
}

Time& Time::operator=(const Time& other)
{
	this->min = other.min;
	this->sec = other.sec;
	return *this;
}

Time Time::operator+(Time k)
{
	int t = min * 60 + sec;
	int kt = k.min * 60 + k.sec;
	t += kt;
	Time temp(t / 60, t % 60);
	return temp;
}

istream& operator>>(istream& in, Time& time)
{
	cout << "minut: "; in >> time.min;
	cout << "secund: "; in >> time.sec;
	return in;
}

ostream& operator<<(ostream& out, Time& time)
{
	out << "\n" << time.min << " : " << time.sec;
	return out;
}

