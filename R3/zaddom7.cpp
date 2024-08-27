#include <iostream>

using namespace std;

int main() 
{

    string a, b, c, d;

    // Input 3 integers
    cout << "Wprowadz cztery wyrazy: ";
    cin >> a >> b >> c >> d;

    // Compare and swap if necessary
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (a > d) swap(a, d);
    if (b > c) swap(b, c);
    if (b > d) swap(b, d);
    if (c > d) swap(c, d);

    // Output the integers in order
    cout << "Wyrazy w kolejnosci alfabetycznej to: " << a << ", " << b << ", " << c << ", " << d << endl;

    return 0;
}
