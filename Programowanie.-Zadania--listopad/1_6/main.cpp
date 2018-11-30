#include <iostream>
using namespace std;

int main()
{
    // 1.6
    float a = 0.0f, b = 0.0f;

    cout << "KALKULATOR\n================="
            "\nProsze, podaj dwie liczby: ";
    cin >> a >> b;
    cout << "a = " << a << " b = " << b
         << "\n1. Dodaj"
            "\n2. Odejmij"
            "\n3. Podziel"
            "\n4. Pomnoz\n\n"
            "Podaj opcje: ";

    int opcja = 0;
    cin >> opcja;

    switch (opcja) {
        case 1:
            cout << a << " + " << b << " = " << a+b;
            break;
        case 2:
            cout << a << " - " << b << " = " << a-b;
            break;
        case 3:
            cout << a << " / " << b << " = " << a/b;
            break;
        case 4:
            cout << a << " * " << b << " = " << a*b;
            break;
        default:
            cout << "Nastepnym razem wprowadz wlasciwa opcje!";
            break;
    }
    cout << '\n';
}
