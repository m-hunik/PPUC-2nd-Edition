#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    cout << "Podaj liczbe calkowita: ";
    int n;
    double d = n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nTrzy raz n == " << 3*n
        << "\nDwa raz n == " << 2*n
        << "\nn do kwadratu == " << n*n
        << "\nPolowa n == " << n/2
        << "\nReszta z dzielenia wynosi == " << n%4
        << "\nPierwiastek drugiego stopnia z n == " << sqrt(n)
        << endl;
   
return 0;
}