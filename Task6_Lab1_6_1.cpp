// Лабораторна робота №4 — Задача 6 (Lab 1.6.1: Logical data)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    bool answer;
    int value;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter a value: ";
    if (!(cin >> value)) {
        value = 10;
        cout << value << endl;
    }

    answer = (value >= 0 && value < 10) ||
             (value * 2 < 20 && value - 2 > -2) ||
             (value - 1 > 1 && value / 2 < 10) ||
             (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}
