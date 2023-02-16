#pragma once
#include <iostream>
#include <string>
using namespace std;

class Route//�������
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
	//�����������
	void setFromWhere(string);
	void setToWhere(string);
	void setTime(float);
	//��������
	string getFromWhere();
	string getToWhere();
	float getTime();
};