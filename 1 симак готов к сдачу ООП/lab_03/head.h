#include <iostream>
using namespace std;

class Time
{
private:
	int min;
	int sec;
public:
	Time();
	Time(int, int);
	Time(const Time&);
	~Time();
	//Селекторы 
	int getMin();
	int getSec();
	//модификаторы
	void setMin(int);
	void setSec(int);
	//перегружение операторы
	Time& operator=(const Time&);//присваивание
	Time& operator++();//префиксная операция
	Time operator++(int);//постфиксная операция 
	Time& operator--();//префиксная операция
	Time operator--(int);//постфиксная операция 
	/*Time operator+(const Time&);
	Time operator-(const Time&);*/
	//глобалный функсия ввод-вывод
	friend istream& operator>>(istream&, Time&);
	friend ostream& operator<<(ostream&, Time&);
};