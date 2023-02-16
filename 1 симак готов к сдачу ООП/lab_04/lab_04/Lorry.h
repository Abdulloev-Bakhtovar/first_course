#pragma once
#include "head.h"
class Lorry :public Car
{
public:
	Lorry(void);
	Lorry(string, int, int,int);
	Lorry(const Lorry&);

	void setGruz(int gruz);
	int getGruz();
	Lorry& operator=(const Lorry&);
	friend istream& operator>>(istream& in, Lorry& lorry);
	friend ostream& operator<<(ostream& out, Lorry& lorry);
	~Lorry(void);
protected:
	int gruz;
};

