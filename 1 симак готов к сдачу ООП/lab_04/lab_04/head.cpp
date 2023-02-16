#include "head.h"

Car::Car(void)
{
	mark = "";
	cyl = 0;
	power = 0;
}
Car::Car(string mark,int cyl,int power)
{
	this->mark = mark;
	this->cyl = cyl;
	this->power = power;
}
Car::Car(const Car& car)
{
	mark = car.mark;
	cyl = car.cyl;
	power = car.power;
}
//модификатор
void Car::setMark(string mark)
{
	this->mark = mark;
}
void Car::setCyl(int cyl)
{
	this->cyl = cyl;
}
void Car::setPower(int power)
{
	this->power = power;
}
//селектор
string Car::getMark()
{
	return mark;
}
int Car::getCyl()
{
	return cyl;
}
int Car::getPower()
{
	return power;
}
Car& Car::operator=(const Car& other)
{
	if (&other == this)
		return *this;
	mark = other.mark;
	cyl = other.cyl;
	power = other.power;
	return *this;
}
istream& operator>>(istream& in, Car& car)
{
	cout << "----------------" << endl;
	cout << "Mark: ";
	in >> car.mark;
	cout << "Cyl: ";
	in >> car.cyl;
	cout << "Power: ";
	in >> car.power;
	cout << "\n----------------" << endl;
	return in;
}
ostream& operator<<(ostream& out, Car& car)
{
	out << "----------------" << endl;
	out << "Mark: " << car.mark;
	out << "\nCyl: " << car.cyl;
	out << "\nPower: " << car.power << endl;
	out << "----------------" << endl;
	return out;
}
Car::~Car(void)
{

}