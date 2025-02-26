#include <iostream>
#include <iomanip>
#include <cstring>
#include <iostream>
#include <windows.h>
using namespace std;

double multiplications(double, double);
double division(double, double);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RU");

    double a(0), b(0);

    cout << "¬ведите число a: ";
    cin >> a;

    cout << "¬ведите число b: ";
    cin >> b;

    cout
        << "a + b = " << a + b << endl
        << "a * b = " << multiplications(a, b) << endl
        << "a * b = " << multiplications(a, b) << endl;

    return 0;
}

double multiplications(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if (b == 0) return 0;

    return a / b;
}