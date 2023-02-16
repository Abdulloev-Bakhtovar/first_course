#pragma once
#include "Pair.h"
class Rightangled :public Pair
{
public:
	Rightangled();
	Rightangled(int, int);
	Rightangled(const Rightangled&);
	Rightangled& operator=(const Rightangled&);
	int hypotenuses();
	friend istream& operator>>(istream&, Rightangled&);
	friend ostream& operator<<(ostream&, Rightangled&);
	~Rightangled();
};

