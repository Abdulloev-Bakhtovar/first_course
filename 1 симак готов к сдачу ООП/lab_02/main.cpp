#include "head.h"
#include <iostream>
using namespace std;

/*
* ���������������� ����� �������
*	- ����� ����������� - string
*	- ����� ���������� - string
*	- ����� � ���� - float
*/
Route makeRoute()
{
	string tempW;
	string tempTW;
	float tempT;
	cout << "������� ����� �����������: ";
	cin >> tempW;
	cout << "������� ����� ����������: ";
	cin >> tempTW;
	cout << "������� ����� � ����: ";
	cin >> tempT;
	Route temp(tempW, tempTW, tempT);
	return temp;
}
void printRoute(Route& temp)
{
	temp.Show();
}
int main()
{
	setlocale(LC_ALL, "ru");
	/*Route r1;
	r1.Show();*/

	/*Route r2("Russia", "Tajikistan", 37);
	r2.Show();*/

	/*Route r3;
	r3 = makeRoute();
	printRoute(r3);*/

	/*Route r4;
	r4.setFromWhere("Perm");
	r4.setToWhere("Kazan");
	r4.setTime(26);
	r4.Show();*/
}