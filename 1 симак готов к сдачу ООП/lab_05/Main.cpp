#include "Object.h"
#include "Pair.h"
#include "Rightangled.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/*Pair a;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	p->Show();
	cout << "////////////" << endl;
	Rightangled r;
	cin >> r;
	cout << r << endl;
	p = &r;
	p->Show();*/

	Vector vect(5);
	Pair a;
	cin >> a;
	cout << "////////////" << endl;
	Rightangled r;
	cin >> r;
	cout << "////////////" << endl;
	Object* p = &a;
	vect.Add(p);
	p = &r;
	vect.Add(p);
	cout << vect;
}