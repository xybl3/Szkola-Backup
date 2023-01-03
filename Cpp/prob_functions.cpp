#include <iostream>

using namespace std;

void DisplayMenu()
{
    cout << "Wybierz akcje ktorą chcesz wykonać\n"
         << "1. Dodawanie\n2.Odejmowanie\n3. Mnozenie\n4.Dzielenie" << endl;
}

int AddNums(int num1, int num2)
{
    return num1 + num2;
}
int SubctractNums(int num1, int num2)
{
    return num1 - num2;
}

int MultiplyNums(int num1, int num2)
{
    return num1 * num2;
}

int DivideNums(int num1, int num2)
{
    if (num2 == 0)
        return 0;
    return num1 / num2;
}

void DisplayInfo(int num1, int num2, int choice)
{
    cout << "wpisano liczby: " << num1 << " i " << num2 << endl;
    cout << "Wybrano: " << (choice == 1) ? "dodawanie" : ((choice == 2) ? "odejmowanie" : ((choice == 3) ? "mnozenie" : ((choice == 4) ? "dzielenie" : "n")));
}

int main()
{
    int num1, num2;
    cout << "Wprowadz numer 1: ";
    cin >> num1;
    cout << endl;
    cout << "Wprowadz numer 2: ";
    cin >> num2;
    cout << endl;
    DisplayMenu();
    int choice;
    cin >> choice;
    DisplayInfo(num1, num2, choice);
    switch (choice)
    {
    case 1:
        cout << "odpowiedz programu to: " << AddNums(num1, num2) << endl;
        break;
    case 2:
        cout << "odpowiedz programu to: " << SubctractNums(num1, num2) << endl;
        break;
    case 3:
        cout << "odpowiedz programu to: " << MultiplyNums(num1, num2) << endl;
        break;
    case 4:
        cout << "odpowiedz programu to: " << DivideNums(num1, num2) << endl;
        break;
    default:
        cout << "Nieprawidlowa opcja!";
        return 0;
    }

    return 0;
}