#include <iostream>

using namespace std;

int main()
{

    int jedno;
    int dwu;
    int piecio;
    int dziesiecio;
    int piedziesiecio;
    int zloty;

    cout << "Wpisz po kolei ile masz jedno, dwu, piecio, dziesiecio, piedziesiecio groszowek oraz ile zlotowek ";
    // cin >> jedno >> dwu >> piecio >> dziesiecio >> piedziesiecio >> zloty;
    cin >> jedno;
        if (jedno == 1) {
            cout << "Ok, masz " << jedno << " jednogroszowke\n";
        } 
        else 
        { 
            if (jedno == 2, 3, 4, 22, 23, 24, 32, 33, 34, 42, 43, 44, 52, 53, 54, 
                62, 63, 64, 72, 73, 74, 82, 83, 84, 92, 93, 94) {
                cout << "Ok, masz " << jedno << " jednogroszowki\n";
            } else {
                cout << "Ok, masz " << jedno << " jednogroszowek\n";
            }
        } 
    
        
        
        
       




    // cout << "Ok, masz " << dwu << " dwugroszowek\n";
    // cout << "Ok, masz " << piecio << " pieciogroszowek\n";
    // cout << "Ok, masz " << dziesiecio << " dziesieciogroszowek\n";
    // cout << "Ok, masz " << piedziesiecio << " piedziesieciogroszowek\n";
    // cout << "Oraz " << zloty << " zlotych\n";

    return 0;

}
