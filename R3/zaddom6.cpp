#include <iostream>

using namespace std;

int main() 
{

    int a, b, c, d;

    // Input 3 integers
    cout << "Wprowadz cztery liczby calkowite: ";
    cin >> a >> b >> c >> d;

    // Compare and swap if necessary
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (a > d) swap(a, d);
    if (b > c) swap(b, c);
    if (b > d) swap(b, d);
    if (c > d) swap(c, d);

    // Output the integers in order
    cout << "Liczby w kolejnosci rosnacej to: " << a << ", " << b << ", " << c << ", " << d << endl;

    return 0;
}
