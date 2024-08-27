#include <iostream>

using namespace std;

int main()
{
    string poprzednie;
    string obecne;
    while (cin>>obecne) {
        if (poprzednie == obecne)
            cout << "Powtorzone slowo: " << obecne << '\n';
        poprzednie = obecne;
    }
    return 0;
}