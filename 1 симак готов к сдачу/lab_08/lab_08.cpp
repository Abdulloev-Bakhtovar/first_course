#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Структура "Государство":
-название;
-столица;
-численность населения;
-занимаемая площадь.
Удалить все элементы, у которых численность меньше
заданной, добавить элемент после элемента с указанным
номером.*/

struct State
{
	char name[50];
	char capital[50];                
	int populationNumber;
	int occupiedArea;
	friend istream& operator>>(istream& in, State& st);
	friend ostream& operator<<(ostream& out, State& st);

	friend fstream& operator>>(fstream& fin, State& s);
	friend fstream& operator<<(fstream& fout, State& s);
};

istream& operator>>(istream& in, State& st)
{
	cout << "Название государства: ";
	in >> st.name;
	cout << "Столица государства: ";
	in >> st.capital;
	cout << "Численность населения: ";
	in >> st.populationNumber;
	cout << "Занимаемая площадь: ";
	in >> st.occupiedArea;
	return in;
}
ostream& operator<<(ostream& out, State& st)
{
	out << st.name << " " << st.capital << " " \
		<< st.populationNumber << " " << st.occupiedArea;
	return out;
}

fstream& operator>>(fstream& fin, State& s)
{
	fin >> s.name;
	fin >> s.capital;
	fin >> s.populationNumber;
	fin >> s.occupiedArea;
	return fin;
}
fstream& operator<<(fstream& fout, State& s)
{
	fout << s.name << " " << s.capital << " " \
		<< s.populationNumber << " " << s.occupiedArea << endl;
	return fout;
}

int main()
{
	setlocale(LC_ALL, "ru");
	char f_name[50] = "State.txt";
	State st;

	int k, c;
	char file_name[30];
	do
	{
		cout << "0. Exit\n1. Make file\n2. Print file\n3. Delete record from file\
\n4. Insert record after this Index to file" << endl;
		cout << ">";
		cin >> c;
		switch (c)
		{
		case 0:
			break;
		case 1:
		{
			fstream fout(f_name, ios::trunc | ios::out);
			if (!fout)
				return -1;
			int Size;
			cout << "Size: "; cin >> Size;
			for (int i = 0; i < Size; i++)
			{
				cin >> st;
				fout << st;
			}
			fout.close();
			break;
		}
		case 2:
		{
			fstream fin(f_name, ios::in);
			if (!fin)
				return -1;
			int i = 0;
			while (fin >> st)
			{
				cout << st << endl;
				i++;
			}
			fin.close();
			break;
		}
		case 3:
		{
			int num;
			cout << "Min populationNumber: "; cin >> num;
			fstream temp("temp", ios::out);
			fstream stream(f_name, ios::in);
			if (!stream)
				return -1;
			int i = 0;
			while (stream >> st)
			{
				if (stream.eof()) break;
				i++;
				if (st.populationNumber > num)
					temp << st;
			}
			stream.close(); temp.close();
			remove(f_name);
			rename("temp", f_name);
			break;
		}
		case 4:
		{
			int index;
			cout << "After this index: "; cin >> index;
			fstream temp("temp.txt", ios::out);
			fstream stream(f_name, ios::in);
			if (!stream)
				return -1;
			State t2; int i = 0;
			while (stream >> st)
			{
				if (stream.eof()) break;
				i++;
				if (index == i)
				{
					temp << st;
					for (int j = 0; j < 1; j++)
					{
						cin >> t2;
						temp << t2 << endl;
						i++;
					}
					continue;
				}
				temp << st;
			}
			stream.close(); temp.close();
			remove(f_name);
			rename("temp.txt", f_name);
			break;
		}
		}
	} while (c != 0);
}