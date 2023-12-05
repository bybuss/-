#include <iostream>
#include <cstdlib>

using namespace std;


int lottery(int& tickets, int& total_sum) {
    int chance = rand() % 100 + 1;
    int sum_of_win = 0;

    if (chance == 1) {
        tickets += 10;
        total_sum += 1000;
        cout << "ДЖЕКПОТ!!! 1000$ + 10 БИЛЕТОВ!" << "\t\t"
             << "Билетов: " << tickets - 1 << "\t   "
             << "Общая сумма выигрыша: $" << total_sum << endl << string(77, '-') << endl;
    }

    else if (chance > 1 && chance <= 50) {
        sum_of_win += rand() % 100;
        total_sum += sum_of_win;
        cout << "К счастью Вы выиграли :) : $" << sum_of_win << "\t\t"
            << "Билетов: " << tickets - 1 << "\t   "
             << "Общая сумма выигрыша: $" << total_sum << endl << string(77, '-') << endl;
    }

    else { 
        cout << "К сожалению Вы не выиграли :(" << "\t\t"
             << "Билетов: " << tickets - 1 << "\t   "
             << "Общая сумма выигрыша: $" << total_sum << endl << string(77, '-') << endl;
    }

    return sum_of_win;
}


int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int tickets = 10;
    int total_sum = 0;
// 👇 это можно сделать и с помощью while, но почему не пойти нестандартным путем? 😎
    for ( ; tickets > 0; tickets -= 1) { 
        total_sum += lottery(tickets, total_sum);
    }
}