#include "Vector.h"
#include "Time.h"
#include <iostream>
using namespace std;
/*
* Класс-контейнер ВЕКТОР с элементами типа int
* Реализовать:
* [] - доступ по индексу
* +  - сложение элементов векторов a[i]+b[i]
* +  - добавлять константу ко всей элементам вектора
*/
int main()
{
	setlocale(LC_ALL, "ru");
	Vector<int> v1(5);
	cin >> v1;
	cout << v1 << endl;
	cout << "[2] = " << v1[2] << endl;

	/*Vector<int> v2(5, 1);
	Vector<int> v3(5);
	cin >> v3;
	cout << (v2 + v3);*/

	/*Vector<int> v4(8,100);
	cout << v4 << endl;
	v4+150;
	cout << v4 << endl;*/

	/*Time t;
	cin >> t;
	cout << t << endl;*/

	/*Time t;
	cin >> t;
	cout << t << endl;

	Vector<Time> vT(5, t);
	cin >> vT;
	cout << vT << endl;

	Vector<Time> vT2(10, t);
	cout << vT2 << endl;
	vT2 = vT;
	cout << vT2 << endl;*/
}