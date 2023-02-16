#include "head.h"
#include <iostream>
using namespace std;

/*
* Создать класс Time
* В нём должно быть поля:
* минуты - int
* секунды - int
* в таком вормате: mm : ss
* Реализоват:
* 1. Добавление секунд
* 2. Вычитание секунд
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