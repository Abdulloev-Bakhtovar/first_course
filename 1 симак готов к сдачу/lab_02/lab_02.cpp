#include <iostream>
using namespace std;
//Найти сумму целых положительных нечетных чисел, меньших 200
int main()
{
    setlocale(LC_ALL, "ru");
    const int N = 200;
    int sum_even = 0, sum_uneven = 0;
    for (int i = 0; i < N; i++)
    {
        //sum += i;
        if (i % 2 == 0)
            sum_even += i;
        else
            sum_uneven += i;
    }
    cout << "Сумма чётный чесло от 0 до 200 = " << sum_even << endl;
    cout << "Сумма не чётный чесло от 0 до 200 = " << sum_uneven << endl;
}