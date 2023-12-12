#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> shopping_list;

	shopping_list["Apple"] = 12;
	shopping_list["Tea"] = 2;
	shopping_list["Coffee"] = 1;
	shopping_list["Cheese"] = 3;
	shopping_list["Orange"] = 9;

	cout << "first map: " << endl;
	for (auto i : shopping_list) {
		cout << i.first << ": " << i.second << endl;
	}

	shopping_list["Pen"] = 6;
	shopping_list["Bob_Colbaskin"] = 123321;

	cout << endl << "second map: " << endl;
	for (const auto& i : shopping_list) {
		cout << i.first << ": " << i.second << endl;
	}
}
