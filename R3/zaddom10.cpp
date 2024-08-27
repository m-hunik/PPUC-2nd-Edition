#include <iostream>

using namespace std;

int main()
{

    string oper;
    double liczba1;
    double liczba2;

    cout << "Podaj operator i dwa operandy: ";
    cin >> oper >> liczba1 >> liczba2;
    cout << oper << " " << liczba1 << " " << liczba2 << endl;

    if (oper == "+") {
        cout << "= " << liczba1 + liczba2;
    }
    if (oper == "-") {
        cout << "= " << liczba1 - liczba2;
    }
    if (oper == "*") {
        cout << "= " << liczba1 * liczba2;
    }
    if (oper == "/") {
        cout << "= " << liczba1 / liczba2;
    }
    if (oper == "plus") {
        cout << "= " << liczba1 + liczba2;
    }
    if (oper == "minus") {
        cout << "= " << liczba1 - liczba2;
    }
    if (oper == "razy") {
        cout << "= " << liczba1 * liczba2;
    }
    if (oper == "podziel") {
        cout << "= " << liczba1 / liczba2;
    }

    return 0;

}