#include <iostream>

using namespace std;

int main()
{

    cout << "Podaj liczbe w km: ";
    double kilometry;
    cin >> kilometry;
    double mile = kilometry*0.621371;

    cout << kilometry << "km to " << mile << " mile";
    

    return 0;

}
