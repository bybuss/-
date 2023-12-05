#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        
    string Kostyas_str;
    string Pashas_str; 

    cout << "Введите строку Кости: ";
    getline(cin, Kostyas_str);

    cout << "Введите строку Паши: ";
    getline(cin, Pashas_str);

    cout << "скрещенная строка: " << Pashas_str.insert(Pashas_str.size() / 2, Kostyas_str);
}