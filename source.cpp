#include <iostream>
#include <iomanip>
#include <cstring>
#include <iostream>
#include <windows.h>
using namespace std;

double division(double, double);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RU");

    double a(0), b(0);

    cout << "������� ����� a: ";
    cin >> a;

    cout << "������� ����� b: ";
    cin >> b;

    cout << "a + b = " << a + b << endl;
    cout << "a / b = " << division(a, b) << endl;
    
    return 0;
}

double division(double a, double b)
{
    if (b == 0) return 0;

    return a / b;
}