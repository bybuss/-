#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//��������� ������� 2-� ������� � 1 ����. ����� ����� ���� ����������, �� ��� �������, ��� ��� ����!!!
int main() {
	setlocale(LC_ALL, "ru");

	int arr[10], arithmetic_mean = 0;
	srand(time(0));

	cout << "������: ";
	for (int i = 0; i < size(arr); i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
		arithmetic_mean += arr[i];
	}

	cout << endl << "index 4: " << arr[3] << endl;
	cout << "index 10: " << arr[9] << endl;
	cout << "index 100: " << arr[99] << endl;

	cout << "������� �������������� �������� ����������: " << (double)arithmetic_mean / size(arr);
}
