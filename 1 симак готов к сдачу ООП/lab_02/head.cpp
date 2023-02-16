#pragma once
#include "head.h"

Route::Route()
{
	this->fromWhere = "";
	this->toWhere = "";
	this->time = 0.0;
}
Route::Route(string fromWhere, string toWhere, float time)
{
	this->fromWhere = fromWhere;
	this->toWhere = toWhere;
	this->time = time;
}
Route::Route(const Route& other)
{
	//cout << "\n������� ����������� ���������� ��� ������� " << this << endl;
	fromWhere = other.fromWhere;
	toWhere = other.toWhere;
	time = other.time;
}
Route::~Route()
{
	//cout << "\n������� ���������� ��� ������� " << this << endl;
}
//���������
string Route::getFromWhere()
{
	return this->fromWhere;
}
string Route::getToWhere()
{
	return this->toWhere;
}
float Route::getTime()
{
	return this->time;
}
//������������
void Route::setFromWhere(string fromWhere)
{
	this->fromWhere = fromWhere;
}
void Route::setToWhere(string toWhere)
{
	this->toWhere = toWhere;
}
void Route::setTime(float time)
{
	this->time = time;
}

void Route::Show()
{
	cout << "����� �����������: " << this->fromWhere << endl;
	cout << "����� ����������: " << this->toWhere << endl;
	cout << "����� � ����: " << this->time << endl;
}