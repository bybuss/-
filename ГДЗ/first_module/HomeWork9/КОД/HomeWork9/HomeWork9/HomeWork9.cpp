#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // для перевода ответа в нижний регистр
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char sign;
    double operand_1, operand_2, answer;
    string reply;

    while (reply != "нет") {
        cout << "Введите первый операнд: ";
        cin >> operand_1;

        cout << endl << "Сложение (+)"
            << " Вычитание (-)"
            << " Умножение (*)" << endl
            << "div (/)"
            << " mod (%)"
            << " Возведение в степень (^)" << endl
            << "Введите математический оператор: ";
        cin >> sign;

        cout << endl << "Введите второй операнд: ";
        cin >> operand_2;

        switch (sign) {

        case '+':
            answer = operand_1 + operand_2;
            printf("\n%lf + %lf = %lf\n", operand_1, operand_2, answer);
            break;

        case '-':
            answer = operand_1 - operand_2;
            printf("\n%lf - %lf = %lf\n", operand_1, operand_2, answer);
            break;

        case '*':
            answer = operand_1 * operand_2;
            printf("\n%lf * %lf = %lf\n", operand_1, operand_2, answer);
            break;

        case '/':
            if (operand_2 == 0) {
                cout << "\nНа ноль делить нельзя! ";
                printf("%lf div %lf = Ошибка!\n", operand_1, operand_2);
            }
            else {
                answer = operand_1 / operand_2;
                printf("\n%lf div %lf = %lf\n", operand_1, operand_2, answer);
            }
            break;

        case '%':
            if (operand_2 == 0) {
                cout << "\nНа ноль делить нельзя! ";
                printf("%lf mod %lf = Ошибка!\n", operand_1, operand_2);
            }
            else {
                answer = (int(operand_1) % int(operand_2));
                printf("\n%lf mod %lf = %lf\n", operand_1, operand_2, answer);
            }
            break;

        case '^':
            answer = 1;
            for (int i = 0; i < int(operand_2); i++) { answer *= operand_1; }
            printf("\n%lf ^ %lf = %lf\n", operand_1, operand_2, answer);
            break;
        }

        cout << "\nБудете продолжать рассчеты? ";
        cin >> reply;
        cout << endl;

        for (int i = 0; i < reply.size(); i++) { reply[i] = tolower(reply[i]); }
    }
}