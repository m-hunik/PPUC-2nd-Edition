#include <iostream>

using namespace std;

int main()
{
    // Wpisywanie
    cout << "Podaj dwie liczby calkowite: ";
    double val1;
    double val2;
    cin >> val1 >> val2;
    double dzielenie_int = static_cast<double> (val1) / val2;
    
    // W³aœciwoœci
    if (val1>val2)
        cout << "Wieksza liczba to: " << val1 << '\n';
    if (val1<val2)
        cout << "Wieksza liczba to: " << val2 << '\n';
    if (val1>val2)
        cout << "Mniejsza liczba to: " << val2 << '\n';
    if (val1<val2)
        cout << "Mniejsza liczba to: " << val1 << '\n';
    cout << "Suma tych liczb to: " << val1 + val2 << '\n'
        << "Roznica to: " << val1 - val2 << '\n'
        << "Iloczyn: " << val1 * val2 << '\n'
        << "Dzielenie: " << dzielenie_int;

    // Wpisywanie
    cout << "\n\nPodaj dwie liczby zmiennoprzpecinkowe: ";
    double val3;
    double val4;
    cin >> val3 >> val4;
    double dzielenie_d = static_cast<double> (val3) / val4;
    
    // W³aœciwoœci
    if (val3>val4)
        cout << "Wieksza liczba to: " << val3 << '\n';
    if (val3<val4)
        cout << "Wieksza liczba to: " << val4 << '\n';
    if (val3>val4)
        cout << "Mniejsza liczba to: " << val4 << '\n';
    if (val3<val4)
        cout << "Mniejsza liczba to: " << val3 << '\n';
    cout << "Suma tych liczb to: " << val3 + val4 << '\n'
        << "Roznica to: " << val3 - val4 << '\n'
        << "Iloczyn: " << val3 * val4 << '\n'
        << "Dzielenie: " << dzielenie_d;


    return 0;
}