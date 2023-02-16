#include <iostream>

using namespace std;

//первый задача
void zadach_1()
{
    int rows = 3, cols = 5;
    cout << "Введите размер строка: "; cin >> rows;
    cout << "Введите размер столбец: "; cin >> cols;
    char** arr = new char* [rows];
    //char** newArr = new char* [rows];
    for (int i = 0; i < rows; ++i)
    {
        arr[i] = new char[cols];
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

   /* for (int z = 0; z < rows; z++)
    {
        for (int t = 0; t < cols; t++)
        {
            if(arr[z])
        }
    }*/

    cout << endl << "Резултать = ";
    for (int i = 0; i < rows; i++)
    {
        cout << "(";
        for (int j = 0; j < cols; ++j)
        {
            
            if (j == 0 /*&& i == 0*/ && arr[i][j] == '0')
                continue;
            else if (j == cols - 1 && arr[i][j] == '0')
                continue;
            else if (arr[i][j] == '0' && arr[i][j + 1] == '0')
                    j++;
            else if (arr[i][j] == '0')
                arr[i][j] = ',';
            cout << arr[i][j];
        }
        cout << ") ";
    }
}

void zadach_2()
{
    int rows = 2, cols = 5, n = 0,d=0,f=0;
    int** arr = new int*[rows];
    cout << "\t\tSTART\n";
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\t\tSWAP\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows-1; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}

int main()
{
    setlocale(LC_ALL, "ru");

    //zadach_1();

    zadach_2();



}