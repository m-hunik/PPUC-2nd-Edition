#include <iostream>

using namespace std;

int main()
{

    int liczba;

    // Wprowadzanie liczby
    cout << "Podaj dowolna liczbe calkowita: ";
    cin >> liczba;

    // Sprawdzenie czy liczba jest parzysta
    if (liczba%2 == 0) {
        cout << "\n" << liczba << " jest parzyste";
    } else {
        cout << "\n" << liczba << " jest nieparzyste";
    }

    return 0;

}