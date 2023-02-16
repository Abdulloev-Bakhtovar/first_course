#include "head.h"

Time::Time()
{
	min = 0;
	sec = 0;
}
Time::Time(int min, int sec)
{
	this->min = min;
	this->sec = sec;
}
Time::Time(const Time& time)
{
	min = time.min;
	sec = time.sec;
}
Time::~Time()
{

}
//селекторы
int Time::getMin()
{
	return min;

}
int Time::getSec()
{
	return sec;
}
//модификаторы
void Time::setMin(int min)
{
	this->min = min;
}
void Time::setSec(int sec)
{
	this->sec = sec;
}
//Перегружение операция
Time& Time::operator=(const Time& time)
{
	if (&time == this)
		return *this;
	min = time.min;
	sec = time.sec;
	return *this;
}
// для плюс 
Time& Time::operator++()//префикс
{
	if (this->sec <59)
	{
		 ++sec;
	}
	else
	{
		if (this->min < 59)
		{
			++min;
			sec = 0;
		}
		else
		{
			min = 0;
			sec = 0;
		}
	}
	return *this;
}
Time Time::operator++(int)//постфикс
{
	Time t(min, sec);
	if (this->sec < 59)
	{
		++sec;
	}
	else
	{
		if (this->min < 59)
		{
			++min;
			sec = 0;
		}
		else
		{
			min = 0;
			sec = 0;
		}
	}
	return t;
}

// для минус 
Time& Time::operator--()//префикс +
{
	if (this->sec > 0)
	{
		--sec;
	}
	else
	{
		if (this->min > 0)
		{
			--min;
		}
		else
		{
			min = 59;
		}
	}
	return *this;
}

Time Time::operator--(int)//постфикс
{
	Time t(min, sec);
	if (this->sec > 0)
	{
		--sec;
	}
	else
	{
		if (this->min > 0)
		{
			--min;
		}
		else
		{
			min = 59;
		}
	}
	return t;
}


//Time Time::operator+(const Time& time)
//{
//	int temp1 = min * 60 + sec;
//	int temp2 = time.min * 60 + time.sec;
//	Time t;
//	t.min = (temp1 + temp2) / 60;
//	t.sec = (temp1 + temp2) % 60;
//	return t;
//}
//Time Time::operator-(const Time& time)
//{
//	int temp1 = min * 60 - sec;
//	int temp2 = time.min * 60 + time.sec;
//	Time t;
//	t.min = (temp1 - temp2) / 60;
//	t.sec = (temp1 - temp2) % 60;
//	return t;
//}
//перегрузка глобалный функции
istream& operator>>(istream& in, Time& time)
{
	cout << "min: ";
	in >> time.min;
	if (time.min > 59)
	{
		time.min = 0;
	}
	cout << "sec: ";
	in >> time.sec;
	if (time.sec > 59)
	{
		time.sec = 0;
		if (time.min < 59)
			time.min++;
		else
			time.min = 0;
	}
	return in;
}
ostream& operator<<(ostream& out, Time& time)
{
	return (out << time.min << " : " << time.sec);
}

fstream& operator>>(fstream& fin, Time& t)
{
	fin >> t.min;
	fin >> t.sec;
	return fin;
}

fstream& operator<<(fstream& fout, Time& t)
{
	fout << t.min << " " << t.sec << endl;
	return fout;
}
