#include "head.h"
#include "File.h"
#include <fstream>
#include <iostream>
using namespace std;

/*
* ������� ����� Time
* � �� ������ ���� ����: ������ - int, ������� - int
* � �������: mm : ss
* ����������:
* 1. ���������� ������  2. ��������� ������
* �������:
*  - ������ ��� ������ ����� ��������� ��������
*  - ��������� �� ������ � �������� ��������� �� 1 ��� 30 ��� ��
*    �������� �������� �� ������ ���� ������: 0 ��� 0 ���
*  - �������� � ������� ����� �������� � ������� ���������
*/

int main()
{
	Time t;
	int k, c;
	char file_name[30];
	do
	{
		cout << "0. Exit\n1. Make file\n2. Print file\n3. Delete record from file\n\
4. Minus is record from file\n5. Insert K record after this Index to file" << endl;
		cout << ">";
		cin >> c;
		switch (c)
		{
		case 0:
			break;
		case 1:
		{
			cout << "file name: "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)
				cout << "Can`t make file!\n";
			break;
		}
		case 2:
		{
			cout << "file name: "; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)
				cout << "Empty file!\n";
			if (k < 0)
				cout << "Can`t make file!\n";
			break;
		}
		case 3:
		{
			int num;
			cout << "file name: "; cin >> file_name;
			cout << "Num record: "; cin >> num;
			k = del_file(file_name,num);
			if (k == 0)
				cout << "Empty file!\n";
			if (k < 0)
				cout << "Can`t make file!\n";
			break;
		}
		case 4:
		{
			int num;
			cout << "file name: "; cin >> file_name;
			cout << "Num record: "; cin >> num;
			k = minus_file(file_name, num);
			if (k == 0)
				cout << "Empty file!\n";
			if (k < 0)
				cout << "Can`t make file!\n";
			break;
		}
		case 5:
		{
			int num,index;
			cout << "file name: "; cin >> file_name;
			cout << "Num record: "; cin >> num;
			cout << "After this index: "; cin >> index;
			k = insert_file(file_name, num,index);
			if (k == 0)
				cout << "Empty file!\n";
			if (k < 0)
				cout << "Can`t make file!\n";
			break;
		}
		}
	} while (c != 0);

}