#include <iostream>
#include <fstream>
#include <string> 
#include <Windows.h>

using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	string path = "bob.txt";

	cout << "Введите ваше имя: ";
	getline(cin, name);
	
	ofstream fout(path);
	if (!fout.is_open()) { 
		cout << "Файл не был открыт! " << endl; 
		return 1; 
	}
	else {
		fout << "Привет, " << name << ", ты записан в файл!!" << endl;
	} 
	fout.close();

	ifstream fin(path);
	if (!fin.is_open()) { 
		cout << "Файл не был открыт! " << endl; 
		return 1;
	}
	else { 
		string data;
		while (getline(fin, data)) { 
			cout << "Содержимое файла: " << data << " " << endl;
		} 
	} 
	fin.close();
}
