#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    string checked_word;

    cout << "Введите вашу строчку: ";
    getline(cin, checked_word);

    if (checked_word.find("сон") != string::npos) { cout << "В вашей строчке есть слово 'сон'" << endl; } 
    else {cout << "В вашей строчке нет слова 'сон'" << endl;}
}
