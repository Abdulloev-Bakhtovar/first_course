#include "deque.h"

/*
* - ������� ��������� deque
* - ��� ��������� - double
* 1. ����� ������� � ������� ��� �������
* 2. ����� ������� � ������� ���
* 3. ������� ������� ����� ������������ � ����������� ��������� ����������\
	 � ������� �� �� ������� �������� ���������a
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