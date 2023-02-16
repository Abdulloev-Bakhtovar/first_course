#pragma once
#include <iostream>
#include <string>
using namespace std;

class Route//маршрут
{
private:
	string fromWhere;
	string toWhere;
	float time;
public:
	Route();
	Route(string, string, float);
	Route(const Route&);
	~Route();
	void Show();
	//модификатор
	void setFromWhere(string);
	void setToWhere(string);
	void setTime(float);
	//селектор
	string getFromWhere();
	string getToWhere();
	float getTime();
};