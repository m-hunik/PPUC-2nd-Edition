#include <iostream>

using namespace std;

int main()
{

    const double dolar_zl = 3.81;
    const double dolar_eu = 0.89;
    const double dolar_yen = 7.12;
    double wartosc;
    string waluta;


    cout << "Podaj wartosc do przeliczenia (dodaj zl, eu, yen jako przedrostek): ";
    cin >> wartosc >> waluta;

    if (waluta == "zl") {
        cout << wartosc << "zlotych to: " << wartosc/dolar_zl << " dolarow"; 
    } else if (waluta == "euro") {
        cout << wartosc << "euro to: " << wartosc/dolar_eu << " dolarow"; 
    } else if (waluta == "yen") {
        cout << wartosc << "yen to: " << wartosc/dolar_yen << " dolarow"; 
    } else {
        cout << "Nieznana waluta!";
    }
    return 0;

}