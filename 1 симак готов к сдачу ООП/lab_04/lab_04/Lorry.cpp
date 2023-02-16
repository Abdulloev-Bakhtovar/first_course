#include "Lorry.h"
#include "head.h"
Lorry::Lorry(void) :Car()
{
	gruz = 0;
}
Lorry::Lorry(string mark, int cyl, int power, int gruz) :Car(mark,cyl,power)
{
	this->gruz = gruz;
}
Lorry::Lorry(const Lorry& lorry)
{
	mark = lorry.mark;
	cyl = lorry.cyl;
	power = lorry.power;
	gruz = lorry.gruz;
}
void Lorry::setGruz(int gruz)
{
	this->gruz = gruz;
}
int Lorry::getGruz()
{
	return gruz;
}
Lorry& Lorry::operator=(const Lorry& lorry)
{
	if (&lorry == this)
		return *this;
	mark = lorry.mark;
	cyl = lorry.cyl;
	power = lorry.power;
	gruz = lorry.gruz;
	return *this;
}
istream& operator>>(istream& in, Lorry& l)
{
	cout << "----------------" << endl;
	cout << "Mark: ";
	in >> l.mark;
	cout << "Cyl: ";
	in >> l.cyl;
	cout << "Power: ";
	in >> l.power;
	cout << "Gruz: ";
	in >> l.gruz;
	cout << "\n----------------" << endl;
	return in;
}
ostream& operator<<(ostream& out, Lorry& l)
{
	out << "----------------" << endl;
	out << "Mark: " << l.mark;
	out << "\nCyl: " << l.cyl;
	out << "\nPower: " << l.power;
	out << "\nGruz: " << l.gruz << endl;
	out << "----------------" << endl;
	return out;
}

Lorry::~Lorry(void)
{

}