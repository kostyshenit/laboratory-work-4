// Лабораторна робота №4 — Задача 8 (Lab 1.7.2: Near zero float numbers)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    const float epsilon = 0.000001f;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter two non-zero integers: ";
    if (!(cin >> a >> b)) {
        a = 1011; b = 1112;
        cout << a << " " << b << endl;
    }

    if (a == 0 || b == 0) {
        cout << "Error: division by zero." << endl;
        return 1;
    }

    float fa = 1.0f / static_cast<float>(a);
    float fb = 1.0f / static_cast<float>(b);

    if (fabs(fa - fb) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
