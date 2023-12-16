#include <iostream>
#include <vector>

using namespace std;


void print(vector<int> need_to_out) {
	for (const auto& elem : need_to_out) {
		cout << elem << " ";
	}
}


int binary_search(vector<int>& vec, int need_to_find) {
	cout << "\nСoртируем ваш массив...\n";
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 1; j < vec.size() - i; j++) {
			if (vec[j - 1] > vec[j]) { swap(vec[j - 1], vec[j]); }
		}
	}

	int left = 0;
	int right = vec.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		cout << "Произвожим поиск...\n";

		if (vec[mid] == need_to_find) { return mid; }
		else if (vec[mid] < need_to_find) { left = mid + 1;
		}
		else { right = mid - 1; }
	}
}


int main() {
	setlocale(LC_ALL, "RU");

	vector<int> vec;
	int count = 0;
	int num, result;

	cout << "Вводите числа, тем самым заполняя массив. "
		<< "Если захотите прекратить, то просто введите другой тип данных" << endl;
	cout << "1 элемент: ";
	while (cin >> num) {
		count += 1;
		cout << count + 1 << " элемент: ";
		vec.push_back(num);
	}
	if (count == 0) { cout << "Вы не ввели ни 1 элемента массива!"; }
	else {
		cout << "\nНа данный момент ваш массив выглядит так: ";
		print(vec);

		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "\nКакое число/цифру вы хотите найти? -> ";
		cin >> num;


		result = binary_search(vec, num);
	}
	printf("\nМы нашли индекс (%d) вашего числа (%d). В этом массиве: ", result, num);
	print(vec);
	cout << endl;
}