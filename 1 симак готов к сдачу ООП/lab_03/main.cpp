#include "head.h"
#include <iostream>
using namespace std;

/*
* ������� ����� Time
* � �� ������ ���� ����:
* ������ - int
* ������� - int
* � ����� �������: mm : ss
* ����������:
* 1. ���������� ������
* 2. ��������� ������
*/

int main()
{
	Time a;
	cin >> a;

	//cout << --a << endl;

	/*Time b = a--;
	cout << b << endl;
	cout << a.getMin() << " : " << a.getSec();*/

	cout << ++a << endl;
	
	cout << "------------" << endl;

	Time b = a++;
	cout << b << endl;
	cout << a.getMin() << " : " << a.getSec();

}