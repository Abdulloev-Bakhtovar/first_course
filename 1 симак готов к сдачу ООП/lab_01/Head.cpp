#pragma once
#include "Head.h"

void fraction::Init(unsigned int F, unsigned int S)//�����������
{
	this->first = F;
	this->second = S;
}
unsigned int fraction::Read()//��� �����
{
	cout << "������� ���� ������ = ";
	cin >> this->first;
	cout << "������� ���������� = ";
	cin >> this->second;
	if (this->first < 1 || this->second < 1)
	{
		cout << "\n����� �� ������ ��� ������ 1 !" << endl;
		return this->first;
	}
	return this->first, this->second;
}
void fraction::Show()//��� ������
{
	cout << "firs = " << this->first << endl;
	cout << "second = " << this->second << endl;
}
double fraction::Cost()
{
	return (first * second);
}