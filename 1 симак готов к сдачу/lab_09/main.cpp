#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
* 1. Скопировать в файл F2 только те стороки из F1,
	 которые начинается и заканчывается с одну и ту же букву.
* 2. Подсчитать количество символов в F2.
*/
int main()
{
	setlocale(LC_ALL, "ru");
	const char f_name[20] = "F1.txt";
	const char f2_name[20] = "F2.txt";
	fstream fout; 
	int sizeF2 = 0;
	int c;
	do
	{
		cout << "0. Exit\n1. Insert to F1\n2. Copy to F2\n3. Print\n4. Size" << endl;
		cout << ">"; cin >> c;
		switch (c)
		{
		case 0:
			break;
		case 1:
		{
			char str[255];
			fout.open(f_name, fstream::app | fstream::out);
			if (!fout)
			{
				cout << "Error!" << endl;
				return -1;
			}
			for (int i = 0; i < 5; i++)
			{
				cin >> str;
				fout << str << endl;
			}
			fout.close();
			break;
		}
		case 2:
		{
			fstream fin;
			string str;
			fin.open(f_name, fstream::in);
			fout.open(f2_name, fstream::out | fstream::app);
			while (fin >> str)
			{
				if (fin.eof())
					break;
				int size = str.length();
				if (str[size-1] == str[0])
				{
					fout << str << endl;
				}
			}
			fin.close(); fout.close();
			break;
		}
		case 3:
		{
			cout << endl;
			fstream fin;
			string str;
			fin.open(f2_name, fstream::in);
			
			while (fin >> str)
			{
				if (fin.eof())
					break;
				cout << str << endl;
			}
			fin.close();
			break;
		}
		case 4:
		{
			fstream fin;
			string str;
			fin.open(f2_name, fstream::in);

			while (fin >> str)
			{
				if (fin.eof())
					break;
				sizeF2 += str.length();
			}
			fin.close();
			cout << "Количество символов: " << sizeF2 << endl;
			break;
		}
		}
	} while (c!=0);
}