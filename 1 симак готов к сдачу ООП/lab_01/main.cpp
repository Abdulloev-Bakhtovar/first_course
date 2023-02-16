#include "Head.h"
#include <iostream>
using namespace std;

//fraction make_fraction(unsigned int F, unsigned int S)
//{
//	fraction t;
//	t.Init(F, S);
//	return t;
//}

/*
* Поля first - int
* Поля second - int
* Рефлизоват метод cost() - стоимость товара.
*/
int main()
{
	setlocale(LC_ALL, "ru");
	fraction A;
	A.Init(3, 2);
	A.Show();
	cout << "\nA.Cost(" << A.first << ", " << A.second << ") = " << A.Cost() << endl << endl;

	fraction B;
	B.Read();
	B.Show();
	cout << "B.Cost(" << B.first << ", " << B.second << ") = " << B.Cost() << endl;
	////объект с указателом x(this);
	//cout << "\nРабота с указателом x(this)";
	//fraction* X = new fraction;
	//X->Init(2,2);
	//X->Show();
	//X->Power();
	//cout << "X.Power(" << X->first << ", " << X->second << ") = " << X->Power() << endl << endl;
	//
	////объект с статический массив
	//cout << "\nРабота с статический массив\n";
	//const int size = 3;
	//fraction arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "[" << i << "] ";
	//	arr[i].Read();
	//}
	//for (int j = 0; j < size; j++)
	//	arr[j].Show();
	//for (int k = 0; k < size; k++)
	//{
	//	arr[k].Power();
	//	cout << "arr[" << k << "].Power()(" <<arr[k].first << ", " << arr[k].second << ") = " << arr[k].Power() << endl;
	//}
	////работа с динамический массив
	//cout << "\nРабота с динамический массив\n";
	//int newSize = 3;
	//fraction* newArr = new fraction[newSize];
	//for (int l = 0; l < newSize; l++)
	//{
	//	cout << "[" << l << "]";
	//	newArr[l].Read();
	//}
	//for (int n = 0; n < newSize; n++)
	//{
	//	newArr[n].Show();
	//}
	//for (int m = 0; m < newSize; m++)
	//{
	//	newArr[m].Power();
	//	cout << "newArr[" << m << "].Power()(" << newArr[m].first << ", " << newArr[m].second << ") = " << newArr[m].Power() << endl;
	//}
}