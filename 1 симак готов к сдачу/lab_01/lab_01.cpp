#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание 1: " << endl;
    int a = 1000;
    double b = 1e-4;
    cout << (pow((a + b), 3) - (pow(a, 3) + 3 * pow(a, 2) * b)) / (3 * a * pow(b, 2) + pow(b, 3)) << endl;

    cout << "Задание 2: " << endl;
    int n, m, res1;
    bool res2, res3;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    res1 = ((n--) - m);
    res2 = ((m--) < n);
    res3 = ((n++) > m);
    cout << "(n--  -m) = " << res1 << endl;
    if (res2 == 0)
        cout << "(m-- < n) = " << "false";
    else
        cout << "(m-- < n) = " << "true";
    cout << endl;
    if (res3 == 0)
        cout << "(n++ > m) = " << "false";
    else
        cout << "(n++ > m) = " << "true";
}