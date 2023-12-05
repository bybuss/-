#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Знакомтесь, это Боб колбаскин. Ему 9 лет и, поймите, у него возраст «Почемучки», будьте добры, поотвечайте на его вопросы." << endl;

	string answer = "что-то написано...";

	/* Первый способ решения:
	while (answer != "Потому что") {
		cout << endl << "Почему?" << endl;
		getline(cin, answer);
	};*/

	//Второй способ решения:
	do {
		cout << endl << "Почему?" << endl;
		getline(cin, answer);
	} while (answer != "Потому что");
}