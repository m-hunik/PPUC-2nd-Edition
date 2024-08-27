#include <iostream>

using namespace std;

int main() 
{

    int liczba;

    cout << "Podaj liczbe calkowita w przedziale 1 - 4: ";
    cin >> liczba;

    if (liczba == 1) {
        cout << "Jeden.";
    }
    if (liczba == 2) {
        cout << "Dwa.";
    }
    if (liczba == 3) {
        cout << "Trzy.";
    }
    if (liczba == 4) {
        cout << "Cztery.";
    }
    if (liczba != 1, 2, 3, 4) {
        cout << "Ej, synek!";
    }

    return 0;
}