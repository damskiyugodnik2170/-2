#include <string>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "Выберите время года:\n";
    cout << "1. Лето\n";
    cout << "2. Осень\n";
    cout << "3. Зима\n";
    cout << "4. Весна\n";
    cout << "Ваш выбор: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Наступило лето, наденьте пуховик!";
    }
    else if (choice == 2) {
        cout << "нееет, листьяя!";
    }
    else if (choice == 3) {
        cout << "С новым годом!";
    }
    else if (choice == 4) {
        cout << "Урааа, листьяяя";
    }
}
