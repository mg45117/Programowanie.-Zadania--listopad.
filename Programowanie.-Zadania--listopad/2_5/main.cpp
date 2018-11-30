#include <iostream>
using namespace std;

int main()
{
    // 2.5
    int x = 0;

    cout << "Podaj liczbe x: ";
    cin >> x;

    while (x > 1) {
        if (x % 2 == 0) {
            cout << x << '\n';
        }
        if (x == 40) {
            break;
        }
        --x;
    }
    cout << "Koniec.\n";
}
