#include <iostream>
#include <iomanip>
#include <cstring>
#include <iostream>
#include <windows.h>
using namespace std;

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

    cout << "a + b = " << a + b << endl;

    return 0;
}