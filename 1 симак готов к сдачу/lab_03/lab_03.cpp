#include <iostream>
using namespace std;

//Для х изменяющегося от a до b с шагом (b-a)/k, где
//(k = 10), вычислить функцию f(x), используя ее разложение в
//степенной ряд в двух случаях :
//а) для заданного n;
//б) для заданной точности ( = 0.0001).

int Fact(int n)//нерекурсивное вычисление факториала
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int Factorial(int n)//рекурсивное вычисление факториала
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    double a = 0.1, b = 1.0;
    int k = 10, n = 10;
    double dx = (b - a) / k;
    double x = a;
    double Eps = 1e-4;
    double el = 0;
    for (int i = 0; i < k; i++)
    {
        double Sn = 0;
        for (int j = 0; j < n; j++)
        {
            el = pow(-1, j) * pow(x, 2 * j + 1) / Factorial(2 * j + 1);
            Sn += el;
        }
        double Se = 0; int z = 0;
        do
        {
            el = pow(-1, z) * pow(x, 2 * z + 1) / Factorial(2 * z + 1);
            Se += el;
            z++;
        } while (abs(el) > Eps);
        double Y = sin(x);
        cout.precision(4);
        cout << "-------------------------------------------------------------" << endl;
        cout << "|" << "  X = " << x << "\t| " << "  Sn = " << Sn << "\t|" << "  Se = " << Se << "\t|" << "  Y = " << Y << " |" << endl;
        x += dx;
    }
    cout << "-------------------------------------------------------------" << endl;
}