#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string name;
    cout << "Введіть ваше ім'я: ";
    cin >> name;
    cout << "Вас звати " << name;
}