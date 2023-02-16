#include "Vector.h"
#include "error.h"
//#include <exception>
#include <iostream>
using namespace std;
/*
* Класс-контейнер ВЕКТОР с элементами типа int
* Реализовать операции:
* - [] -доступ по индексу
* - ++ -добавлять элемент в вектор(постфиксная операция
добавлять элемент в конце, префиксная в начало)
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