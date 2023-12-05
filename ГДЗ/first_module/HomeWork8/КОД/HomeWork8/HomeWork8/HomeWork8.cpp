#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int arr[100], even_count = 0, odd_count = 0;

    srand(time(0));

    for (int i = 0; i < size(arr); i++) {
        arr[i] = rand() % 100;

        //Проверяем количество четных и нечетных
        if (arr[i] == 0) { even_count += 1; }
        else if (arr[i] % 2 == 0) { even_count += 1; }
        else { odd_count += 1; }
    }

    //Выводим данные
    cout << "Четных элементов: " << even_count << endl  // вывел для проверки                                                
         << "Нечетных элементов: " << odd_count << endl; // вывел для проверки
    if (even_count == odd_count) {
        cout << "Весь массив:\n";
        for (int i = 0; i < size(arr); i++) {
            cout << arr[i] << " ";
        }
    } else if (even_count > odd_count) { 
        cout << "\nЧетные элементы массива:\n";
        for (int i = 0; i < size(arr); i++) {
            if (arr[i] == 0) { cout << arr[i] << " "; }
            else if (arr[i] % 2 == 0) { cout << arr[i] << " "; }
        }
    } else {
        cout << "\nНечётные элементы массива:\n";
        for (int i = 0; i < size(arr); i++) {
            if (arr[i] % 2 != 0) { cout << arr[i] << " "; }
        }
    }
}