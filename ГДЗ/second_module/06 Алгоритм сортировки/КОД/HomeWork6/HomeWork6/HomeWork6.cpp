#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>

using namespace std;


void deafult_sort() {
    srand(time(0));

    vector<int> default_vec;
    for (int i = 0; i <= 10; i++) {
        default_vec.push_back(rand() % 100);
    }

    cout << "Неотсортированный вектор: ";
    for (const auto& elem : default_vec) {
        cout << elem << " ";
    }
    cout << endl;

    sort(default_vec.begin(), default_vec.end());
    cout << "Отсортированный вектор: ";
    for (const auto& elem : default_vec) {
        cout << elem << " ";
    }
    cout << endl;
}


void bubble_sort() {
    vector<int> bubble_vec;
    int count = 0;
    int size;

    cout << "Вводите числа, тем самым заполняя массив. "  
         << "Если захотите прекратить, то просто введите другой тип данных" << endl;
    cout << "1 элемент: ";
    while (cin >> size) {
        count += 1;
        cout << count + 1 << " элемент: ";
        bubble_vec.push_back(size);
    }

    if (count == 0) { cout << "Вы не ввели ни 1 элемента массива!"; }
    else {
        cout << "Неотсортированный вектор: ";
        for (const auto& elem : bubble_vec) {
            cout << elem << " ";
        }
        cout << endl;

        cout << "Отсортированный вектор: ";
        for (int i = 0; i < bubble_vec.size(); i++) {
            for (int j = 1; j < bubble_vec.size() - i; j++) {
                if (bubble_vec[j - 1] > bubble_vec[j]) { swap(bubble_vec[j], bubble_vec[j - 1]); }
            }
        }
        for (const auto& elem : bubble_vec) {
            cout << elem << " ";
        }
        cout << endl;
        cin.clear();
        cin >> count;
    }
}


int main() {
    setlocale(LC_ALL, "RU");

    cout << "С помощью sort: \n";
    deafult_sort();

    cout << "\nС помощью пузырьковой молитвы богу пузырьков: \n";
    bubble_sort();
}