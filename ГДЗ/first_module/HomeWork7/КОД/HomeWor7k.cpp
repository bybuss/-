#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Объеденил решения 2-х заданий в 1 файл. Хотел через файл заголовока, но мне сказали, что так низя!!!
int main() {
	setlocale(LC_ALL, "ru");

	int arr[10], arithmetic_mean = 0;
	srand(time(0));

	cout << "Массив: ";
	for (int i = 0; i < size(arr); i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
		arithmetic_mean += arr[i];
	}

	cout << endl << "index 4: " << arr[3] << endl;
	cout << "index 10: " << arr[9] << endl;
	cout << "index 100: " << arr[99] << endl;

	cout << "Среднее арифметическое значение массивчика: " << (double)arithmetic_mean / size(arr);
}
