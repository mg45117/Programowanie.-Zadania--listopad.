#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    cout << "Podaj liczbe x: ";
    cin >> x;

    while (x > 1) {
        cout << --x << '\n';
    }
    cout << "Koniec.";
}
