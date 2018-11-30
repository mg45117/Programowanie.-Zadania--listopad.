#include <iostream>
using namespace std;

int main()
{
    // 2.3
    int x = 0, wynik = 0;
    int nrPotegi = 1;
    
    cout << "Podaj liczbe x: ";
    cin >> x;
    
    wynik = x;

    while (wynik < 100000) {
        cout << x << " ** " << nrPotegi << " = " << wynik << '\n';
        wynik *= x;
        ++nrPotegi;
    }
    cout << "Aktualny wynik: " 
         << x << " ** " << nrPotegi << " = " << wynik << " jest wiekszy niz 100 000. Koniec\n";
}
