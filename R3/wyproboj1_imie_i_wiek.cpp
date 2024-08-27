#include <iostream>

using namespace std;

int main() {

    cout << "Podaj swoje imie i wiek: ";
    string imie;
    double wiek; 
    cin >> imie >> wiek;

    cout << "Masz na imie " << imie << " i masz " << wiek*12 << " miesiecy";

return 0;
}