#include <iostream>
 
using namespace std;

int main() {

    cout << "Podaj imie osoby do ktorej chcesz wyslac list: ";
    string first_name {" "};
    cin >> first_name;

    cout << "Podaj imie waszego wspolnego przyjaciela: ";
    string friend_name {" "};
    cin >> friend_name;
    
    cout << "Podaj wiek osoby do ktorej piszesz list: ";
    int age {0};
    cin >> age;

    cout << "Jesli Wasz przyjaciel jest mezczyzna wpisz m, jesli kobieta - k: ";
    char friend_sex {0};
    cin >> friend_sex;

    cout << "\nDrogi " << first_name << ",\n\n"
        << "    Co u Ciebie, jak Cie zycie ostatnio traktuje? Mam nadzieje, ze wszystko w porzadku i cieszysz sie dobrym zdrowiem. Widziales sie z ostatnio z " 
        << friend_name << "?";
    if (friend_sex == 'm')
        cout << " Jesli go zobaczysz, popros aby do mnie zadzwonil.\n\n";
    if (friend_sex == 'k')
        cout << " Jesli ja zobaczysz popros aby do mnie zadzwonila.\n\n";
        cout << "Wiem, ze w zeszlym tygodniu miales urodziny i masz juz " << age << " lat. ";
    if (age == 12)
        cout << "W przyszlym roku bedziesz miec " << age+1 << " lat!";
    if (age == 17)
        cout << "W przyszlym roku bedziesz mogl glosowac";
    if (age == 70)
    cout << "Zatem wszystkiego najlepszego na emeryturze, stary koniu!";

    cout << "\n\n\nZ pozdrowieniami\n\nMichal Hunik";

    return 0;

}