#include <iostream>
#include <ctime>
using  namespace std;

//Сформировать одномерный массив.
//Удалить из него К элементов, начиная с заданного номера.
//Добавить элемент с заданным ключом;

void push_back(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 9 + rand() % 99;
	}
}

void print(const int arr[], const int size)
{
	cout << "arr = [ ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl << endl;
}

void remove(int*& arr,int& size, const int count, const int index)
{
	int newCount = 0;
	int* newArr = new int[size - count];
	for (int i = 0,j=0; i < size; j++,i++)
	{
		if (i == index)
		{
			while (count != newCount)
			{
				i++;
				newCount++;
			}
		}
		newArr[j] = arr[i];
	}
	size -= count;
	delete[] arr;
	arr = newArr;
}

void insert(int*& arr,int& size, const int key)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = key;
	size++;
	delete[] arr;
	arr = newArr;
}

void insertIndex(int*& arr, int& size, const int Num, const int index)
{
	++size;
	int k = -1;
	int* newArr = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		if (index == i)
		{
			newArr[i] = Num;
			k = i;
			break;
		}
		newArr[i] = arr[i];
	}
	if (k > -1)
	{
		for (int j = k,l = ++k; j < size; ++j,++l)
		{
			newArr[l] = arr[j];
		}
		delete[] arr;
		arr = newArr;
	}
}

int main()
{
	srand(time(NULL));
	int size = 10;
	int* arr = new int[size];
	push_back(arr, size);
	print(arr, size);
	remove(arr, size, 5, 3);
	print(arr, size);
	//insert(arr, size, 15);
	//print(arr, size);
	insertIndex(arr, size, 15,2);
	print(arr, size);
	delete[] arr;
}