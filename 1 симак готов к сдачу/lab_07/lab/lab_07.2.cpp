#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

//функция суммирования с переменным числом параметров
int sum(int n, ... )
{
    int* p = &n;    
    int sum = 0;
    for (; n != 0; n--)
        sum += *(++p);
    return sum;
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Сумма пяти элементов:\n 1+2+3+4+5 = " << sum(5,1,2,3,4,5) << endl;
    cout << "Сумма десяти элементов:\n 1+2+3+4+5+6+7+8+9+10 = " << sum(10,1, 2, 3, 4, 5,6,7,8,9,10) << endl;
    cout << "Сумма двенадцати элементов:\n 1+2+3+4+5+6+7+8+9+10+11+12 = " << sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12) << endl;
    return 0;
}