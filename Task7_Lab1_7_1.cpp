// Лабораторна робота №4 — Задача 7 (Lab 1.7.1: Printing data)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double v1 = 2.3;
    double v2 = 2.3;
    double v3 = 2.123456;
    double v4 = 2.123456;
    double v5 = 2.123456;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << v1 << endl;
    cout << fixed << setprecision(2) << v2 << endl;
    cout << setprecision(6) << v3 << endl;
    cout << setprecision(2) << v4 << endl;
    cout << setprecision(0) << v5 << endl;

    return 0;
}
