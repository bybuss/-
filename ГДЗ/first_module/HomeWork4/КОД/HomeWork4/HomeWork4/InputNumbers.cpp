#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num;

	/* Первый способ решения:
	while (num != 0) {
		cout << "Введите любое число или цифру: ";
		cin >> num;
	};

	cout << endl << "Вы ввели 0 => вышли из программы." << endl; */

	//Второй способ решения:
	do {
		cout << "Введите любое число или цифру: ";
		cin >> num;
	} while (num != 0);

	cout << endl << "Вы ввели 0 => вышли из программы." << endl;
}