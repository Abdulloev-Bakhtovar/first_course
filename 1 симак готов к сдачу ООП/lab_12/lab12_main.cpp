#include <iostream>
#include <set>
using namespace std;
typedef multiset<double>mS;
typedef mS::iterator it;


/*
* - Создать контейнер multiset
* - Тип элементов - double
* 1. Найти элемент и изменит его позиция
* 2. Найти элемент и удалить его
* 3. Найдите разницу между максимальным и минимальным элементом контейнера\
	 и вычесть ее из каждого элемента контейнерa
*/

int main()
{
	mS s1;
	for (int i = 0; i < 10; i++)
	{
		s1.insert(rand() % 15);
	}
	cout << ">";
	for (double n : s1)
	{
		cout << n << " ";
	}
	cout << endl;

	/*s1.insert(10);
	cout << ">";
	for (double n : s1)
	{
		cout << n << " ";
	}
	cout << endl;*/

	/*s1.erase(4);
	cout << ">";
	for (double n : s1)
	{
		cout << n << " ";
	}
	cout << endl;*/

	it it1 = s1.end();
	--it1;
	double min = *s1.begin(), max = *it1;
	double res = max - min;
	//cout << min << " max = " << max << endl;
	for (auto& n : s1)
	{
		cout << n-res << " ";
	}
	cout << endl;
}










































////функция для формирования словаря
//TMap make_map(int n)
//{
//	TMap m;
//	int a;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "?";
//		cin >> a;
//		m.insert(make_pair(i, a));
//	}
//	return m;
//}
//
////функция для печати словаря 
//void print_map(TMap m)
//{
//	for (int i = 0; i < m.size(); i++)
//	{
//		cout << i << " : " << m[i] << " " << endl;
//	}
//}
//
////вычисление средниарифметический
//int srednee(TMap v)
//{
//	int s = 0;
//	for (int i = 0; i < v.size(); i++)
//		s += v[i];
//	int n = v.size();
//	return s / n;
//}
////Search max_val
//int Max(TMap v)
//{
//	it i = v.begin();
//	int num = 0, k = 0;
//	int m = (*i).second;
//	while (i != v.end())
//	{
//		if (m < (*i).second)
//		{
//			m = (*i).second;
//			num = k;
//		}
//		i++; k++;
//	}
//	return num;
//}
//
////search MinVal
//int Min(TMap v)
//{
//	it i = v.begin();
//	int num = 0,/*num nomerMin*/ k = 0;//schochik
//	int m = (*i).second;
//	while (i != v.end())
//	{
//		if (m > (*i).second)
//		{
//			m = (*i).second;
//			num = k;
//		}
//		i++; k++;
//	}
//	return num;
//}
//
//void delenie(TMap& v)
//{
//	int m = v[Min(v)];
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i] = v[i] / m;
//	}
//}