#include "Vector.h"
#include "error.h"
//#include <exception>
#include <iostream>
using namespace std;
/*
* �����-��������� ������ � ���������� ���� int
* ����������� ��������:
* - [] -������ �� �������
* - ++ -��������� ������� � ������(����������� ��������
��������� ������� � �����, ���������� � ������)
*/
int main()
{
	try
	{
		/*Vector x(5);
		cin >> x;
		cout << x;
		cout << "index: ";
		int i;
		cin >> i;
		cout << x[i] << endl;*/

		Vector y(5);
		cin >> y;
		++y;
		cout << y << endl;
		y++;
		cout << y << endl;
	}
	catch (Error& ex)
	{
		ex.what();
	}
	
}