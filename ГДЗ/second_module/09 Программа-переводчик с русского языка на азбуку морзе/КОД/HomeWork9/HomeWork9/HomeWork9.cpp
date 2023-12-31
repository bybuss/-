#include <iostream>
#include <map>
#include <string>
#include <Windows.h>
#include <clocale> 

using namespace std;


char toUp(char& ch) {
    // Функция для перевода в верхний регистр символов
    unsigned char ruchar = static_cast<unsigned char>(ch);
    if (ruchar >= 0xE0 && ruchar <= 0xFF) { 
        ch = ruchar - 0x20;
        return ch;
    }
    else if (ch >= 'a' && ch <= 'z') { 
        return toupper(ch);
    }
    else { return ch; } 
}


string symbol_to_morse(const map<char, string>& dict, string& text) {
    // Функция для перевода текста в морзе
    string morse;
    for (char symbol : text) {
        symbol = toUp(symbol);
        auto code = dict.find(symbol);
        if (code != dict.end()) {
            morse += code->second + " ";
        }
        else { cout << "Нет такого символа у нас в map`чике пожилом!!!\n"; }
    }
    return morse;
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string data;
    map<char, string> Morsedict = {
    // Английский алфавит
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."},
    // Русский алфавит
    {'А', ".-"}, {'Б', "-..."}, {'В', ".--"}, {'Г', "--."}, {'Д', "-.."},
    {'Е', "."}, {'Ж', "...-"}, {'З', "--.."}, {'И', ".."}, {'Й', ".---"},
    {'К', "-.-"}, {'Л', ".-.."}, {'М', "--"}, {'Н', "-."}, {'О', "---"},
    {'П', ".--."}, {'Р', ".-."}, {'С', "..."}, {'Т', "-"}, {'У', "..-"},
    {'Ф', "..-."}, {'Х', "...."}, {'Ц', "-.-."}, {'Ч', "---."}, {'Ш', "----"},
    {'Щ', "--.-"}, {'Ъ', "--.--"}, {'Ы', "-.--"}, {'Ь', "-..-"}, {'Э', "..-.."},
    {'Ю', "..--"}, {'Я', ".-.-"},
    // Цифры
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
    // Символы
    {' ', "/"} 
    };

    cout << "Введите ваш текст: ";
    while (getline(cin, data)) {
        if (data == "выход" || data == "exit") { break; }
        string morse = symbol_to_morse(Morsedict, data);
        cout << morse << endl 
            << "Для выхода из рограммы пвоспользуйтесь словами: <выход> или <exit>\n" << endl
            << "Введите ваш текст: ";
    }
}