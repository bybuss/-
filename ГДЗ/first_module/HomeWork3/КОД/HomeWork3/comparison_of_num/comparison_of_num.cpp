#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int num_1, num_2, num_3;

    cout << "Введите значение для первого числа: ";
    cin >> num_1;
    cout << "Введите значение для второго числа: ";
    cin >> num_2;
    cout << "Введите значение для треьего числа: ";
    cin >> num_3;

    if ((num_1 == num_2) || (num_1 == num_3) || (num_2 == num_3)) {
        num_1 += 5, num_2 += 5, num_3 += 5;
        cout << num_1 << endl  << num_2 << endl << num_3 << endl;
    } else {
        cout << "Равных числе нет.";
    }   
}