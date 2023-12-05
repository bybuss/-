#include <iostream>
#include <locale.h>

// bob colbaskin ubiica noobov

int main() {
    setlocale(LC_ALL, "Russian"); //были ошибки с корректным выводом в консоль, поэтому добавил 😎

    int age = 24;
    std::string drink = "3.14_VO";
    char symbol = 'Y';
    float pi = 3.14f;
    double more_pi = 3.14141414141414;
    bool be_drunk = true;

    std::cout << "Введите новое значение для «age» ";
    std::cin >> age;

    std::cout << "Введите новое значение для «drink» ";
    std::cin >> drink;

    std::cout << "Введите новое значение для «be_drunk» ";
    std::cin >> be_drunk;

    std::cout << "age: " << age << std::endl;
    std::cout << "drink: " << drink << std::endl;
    std::cout << "symbol: " << symbol << std::endl;
    std::cout << "pi: " << pi << std::endl;
    std::cout << "more_pi: " << more_pi << std::endl;
    std::cout << "be_drunk: " << be_drunk << std::endl;
}
