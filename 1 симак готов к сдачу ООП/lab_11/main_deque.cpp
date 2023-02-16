#include "deque.h"

/*
* - Создать контейнер deque
* - Тип элементов - double
* 1. Найти элемент и изменит его позиция
* 2. Найти элемент и удалить его
* 3. Найдите разницу между максимальным и минимальным элементом контейнера\
	 и вычесть ее из каждого элемента контейнерa
*/
int main()
{
	try
	{
		deque<double> d;
		auto it = d.begin();
		int size;
		cout << "Size: "; cin >> size;
		d = make_deque(size);
		print_deque(d);

		
		/*double Value;
		int newInd;
		cout << "Value: ";
		cin >> Value;
		cout << "New index: ";
		cin >> newInd;
		d = swap_deque(d, Value, newInd);
		print_deque(d);*/

		/*double delVal;
		cout << "num for delete: ";
		cin >> delVal;
		d = del_val(d, delVal);
		print_deque(d);*/

		d = searchMaxMin(d);
		print_deque(d);

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
}