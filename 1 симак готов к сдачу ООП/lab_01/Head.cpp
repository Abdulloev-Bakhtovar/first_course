#pragma once
#include "Head.h"

void fraction::Init(unsigned int F, unsigned int S)//конструктор
{
	this->first = F;
	this->second = S;
}
unsigned int fraction::Read()//дл€ ввода
{
	cout << "¬ведите цену товара = ";
	cin >> this->first;
	cout << "¬ведите количество = ";
	cin >> this->second;
	if (this->first < 1 || this->second < 1)
	{
		cout << "\n„исло не должно быт меньще 1 !" << endl;
		return this->first;
	}
	return this->first, this->second;
}
void fraction::Show()//дл€ выводы
{
	cout << "firs = " << this->first << endl;
	cout << "second = " << this->second << endl;
}
double fraction::Cost()
{
	return (first * second);
}