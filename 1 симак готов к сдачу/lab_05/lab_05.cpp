#include <iostream>
using namespace std;
//Написать процедуру для суммирования матриц.С ее
//помощью сложить исходную матрицу и транспонированную
//(т.е.полученную поворотом исходной на 90 ).
int main()
{
	setlocale(LC_ALL, "ru");
	const int rows = 5;
	const int cols = 5;
	int arrA[rows][cols];
	int arrB[rows][cols];

	cout << "Матрица состоит из чисел:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrA[i][j] =10+ rand()%30;
			cout << arrA[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nТранспонированная матрица:\n";
	for (int j = 0; j < cols; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			arrB[i][j] = arrA[i][j];
			cout << arrB[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nСумма матрица:\n";
	for (int k = 0; k < rows; k++)
	{
		for (int z = 0; z < cols; z++)
		{
			cout << arrA[k][z] + arrB[k][z] << " ";
		}
		cout << endl;
	}
}

/*
 #include <iostream>

using namespace std;

int main()
{
	const int rows = 2, cols = 4;
	int arr[rows][cols];
	int arr1[rows][cols];
	int n = 10;
	cout << "  ******\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = 10 + rand() % 20;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "  ******\n";

	for (int  k = 0; k < cols; k++)
	{
		for (int z = 0; z < rows; z++)
		{
			cout << arr[z][k] << " ";
		}
		cout << endl;
	}

	cout << "  ******\n";
	for (int t = 0; t < rows; t++)
	{
		for (int r = 0; r < cols; r++)
		{
			cout << arr[t][r] + arr[t][r] << " ";
		}
		cout << endl;
	}

	/*cout << "  ******\n";
	for (int t = 0; t < rows; t++)
	{
		for (int r = 0; r < cols; r++)
		{
			cout << arr[t][r] + arr[r][t] << " ";
		}
		cout << endl;
	}
}*/