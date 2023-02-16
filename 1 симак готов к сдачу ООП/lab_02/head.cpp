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
	//cout << "\nВызвано конструктор копировани для объекта " << this << endl;
	fromWhere = other.fromWhere;
	toWhere = other.toWhere;
	time = other.time;
}
Route::~Route()
{
	//cout << "\nВызвано деструктор для объекта " << this << endl;
}
//селекторы
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
//модификаторы
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
	cout << "Пункт отправления: " << this->fromWhere << endl;
	cout << "Пункт назначиния: " << this->toWhere << endl;
	cout << "Время в пути: " << this->time << endl;
}