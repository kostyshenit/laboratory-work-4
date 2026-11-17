// Лабораторна робота №4 — Задача 9 (Lab 1.7.3: Getting input from user)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter 4 numbers (1..255): ";
    if (!(cin >> a >> b >> c >> d)) {
        a = 4; b = 2; c = 255; d = 212;
        cout << a << " " << b << " " << c << " " << d << endl;
    }

    if (a >= 1 && a <= 255 &&
        b >= 1 && b <= 255 &&
        c >= 1 && c <= 255 &&
        d >= 1 && d <= 255) {
        cout << a << "." << b << "." << c << "." << d << endl;
    } else {
        cout << "Invalid IP octet(s): values must be in range 1..255." << endl;
    }

    return 0;
}
