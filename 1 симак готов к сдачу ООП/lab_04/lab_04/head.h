#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(void);
	Car(string, int, int);
	Car(const Car&);
	void setMark(string);
	void setCyl(int);
	void setPower(int);
	string getMark();
	int getCyl();
	int getPower();
	Car& operator=(const Car&);
	friend istream& operator>>(istream& in, Car& car);
	friend ostream& operator<<(ostream& out, Car& car);
	virtual ~Car(void);
protected:
	string mark;
	int cyl;
	int power;
};