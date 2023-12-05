#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int count = 0;
    char answer;

    cout << "Какая столица Франции?" << endl;
    cout << "a)Лондон " << endl << "b)Париж " << endl << "c)Берлин " << endl << "d)Мадрид " << endl << "Ответ: ";
    cin >> answer;
    if (answer == 'b') {
        cout << "Правильно! Вы заработали 1 балл." << endl;
        count += 1;
    } else {
        cout << "Неправильно! Вы не заработали балл за этот вопрос." << endl;
    }


    cout << endl << "Сколько планет в Солнечной системме?" << endl;
    cout << "a)8 " << endl << "b)5 " << endl << "c)9 " << endl << "d)10 " << endl << "Ответ: ";
    cin >> answer;
    if (answer == 'a') {
        cout << "Правильно! Вы заработали 1 балл." << endl;
        count += 1;
    }
    else {
        cout << "Неправильно! Вы не заработали балл за этот вопрос." << endl;
    }


    cout << endl << "Какой год был объявлен Годом Революции в России?" << endl;
    cout << "a)1905 " << endl << "b)1921 " << endl << "c)1945 " << endl << "d)1917 " << endl << "Ответ: ";
    cin >> answer;
    if (answer == 'd') {
        cout << "Правильно! Вы заработали 1 балл." << endl;
        count += 1;
    }
    else {
        cout << "Неправильно! Вы не заработали балл за этот вопрос." << endl;
    }
     
    cout << endl << "Количество заработанных Вами баллов: " << count << " из 3 возможных." << endl;
}