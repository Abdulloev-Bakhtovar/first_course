#include <iostream>
#include <ctime>
using namespace std;

//1)
//Сформировать одномерный массив целых чисел,
//используя датчик случайных чисел.
//2)
//Распечатать полученный массив.
//3)
//Удалить все элементы равные 0
//4)
//Добавить после первого четного элемента массива
//элемент со значением M[I - 1] + 2.
//5)
//Распечатать полученный массив.
void fillArr(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 15;
    }
}

void printArr(const int* arr, const int size)
{
    cout << "[ ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << "]";
}
void pop_back(int*& arr, int& size, const int delNull)
{
    int searchNull = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == delNull)
            searchNull++;
    }
    int* newArr = new int[size - (searchNull-1)];
    for (int z =0,p = 0; z < size; ++z)
    {
        if (arr[z] != delNull)
        {
            newArr[p] = arr[z];
            p++;
        }
    }
    size -= searchNull;
    delete[] arr;
    arr = newArr;
}

void push_back(int*& arr, int& size/*,const int addNull*/)
{
    int* newArr = new int[size];
    int tmp = 0, index = 0;
    for (int i = 0; i < size; i++)
    {
       /* if (arr[i] % 2 == 0 && i == 0)
        {
            cout << "\nЭлемент вышла из область массива! ";
            return;
        }*/
        if (arr[i] % 2 == 0 && i != 0)
        {
            tmp = arr[i - 1] + 2;
            index = i - 1;
            break;
        }
        
    }
    int k = -1;
    for (int j = 0; j < size; j++)
    {
        if (j == index)
        {
            newArr[j] = tmp;
            k = j+1;
            break;
        }
        newArr[j] = arr[j];
    }
    if (k > -1)
    {
        for (int z = k; z < size; z++)
        {
            newArr[z] = arr[z];
        }
    }
    delete[] arr; 
    arr = newArr;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int size = 10;
    int* arr = new int[size];
    cout << "Сформировать одномерный массив целых чисел, используя датчик случайных чисел: ";
    fillArr(arr, size);
    cout << "\narr_1 =\t";
    printArr(arr, size);

    cout << "\n\nУдалить все элементы равные 0 :";
    pop_back(arr, size,0);
    cout << "\narr_2 =\t";
    printArr(arr, size);
    
    cout << "\n\nДобавить после первого четного элемента массива элемент со значением M[I - 1] + 2 :";
    push_back(arr, size);
    cout << "\narr_3 =\t";
    printArr(arr, size);

    cout << endl;
    delete[] arr;
}