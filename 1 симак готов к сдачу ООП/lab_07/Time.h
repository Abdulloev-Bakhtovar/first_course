#pragma once
#include <iostream>
using namespace std;
class Time
{
private:
	int min;
	int sec;
public:
	Time();
	Time(int min, int sec);
	Time(const Time& other);
	virtual ~Time();
	Time& operator=(const Time& other);
	Time operator+(Time k);
	friend istream& operator>>(istream& in, Time& time);
	friend ostream& operator<<(ostream& out, Time& time);
};

