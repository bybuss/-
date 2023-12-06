#include <iostream>
#include <Windows.h>

using namespace std;


void int_print(int &a, int &b) {
// ввод 2 целых числа в консоль.

    cout << "Введите значение для a: ";
    cin >> a;
    cout << "Введите значение для b: ";
    cin >> b;

    cout << "a: " << a << endl
         << "b: " << b << endl;
}


int sum(int a, int b) {
// сумма 2 целых чисел.
    return a + b;
}


int main() {
// майнкрафт.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;

    int_print(a, b); 
    int result = sum(a, b);

    cout << "Сумма: " << result << endl;
}
