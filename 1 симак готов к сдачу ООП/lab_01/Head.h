#pragma once
#include <iostream>
using namespace std;
struct fraction
{
	unsigned int first;
	unsigned int second;
	void Init(unsigned int, unsigned int);
	unsigned int Read();
	void Show();
	double Cost();
};