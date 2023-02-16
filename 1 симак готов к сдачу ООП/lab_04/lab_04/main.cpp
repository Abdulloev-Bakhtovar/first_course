#include "head.h"
#include "Lorry.h"
#include <iostream>
using namespace std;

void f1(Car& car)
{
	car.setMark("Opel");
	cout << car;
}

Car f2()
{
	Lorry l("Kia", 1, 2, 3);
	return l;
}

int main()
{
	/*Car a;
	cin >> a;
	cout << a;
	Car b("Ford", 4, 115);
	cout << b;
	a = b;
	cout << a;*/

	Car car;
	f1(car);

	Car car2;
	car2 = f2();
	cout << car2;


	/*Lorry a;
	cin >> a;
	cout << a;*/


}
