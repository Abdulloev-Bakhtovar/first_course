#include "Vector.h"
//#include "Iterator.h"
#include <iostream>
using namespace std;
/*
* �����-��������� ������ � ���������� ���� int
* �����������:
* [] - ������ �� �������
* +  - �������� ��������� �������� a[i]+b[i]
* +  - ��������� ��������� �� ���� ��������� �������
* -- - ������� � ����������� ��������(� ������-��������)
*/
int main()
{
	/*Vector v1(5,3);
	cout << v1 << endl;
	cout << "[0] = " << v1[0] << endl;*/

	/*Vector v2(5, 1);
	Vector v3(5, 8);
	cout << (v2 + v3);*/

	/*Vector v4(8,100);
	v4+150;
	cout << v4 << endl;*/

	Vector v5(10, 15);
	cout << v5.first();
}