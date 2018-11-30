#include <iostream>
using namespace std;

int main()
{
    // 1.5
    int x1 = 0, x2 = 0, x3 = 0;
    
    cout << "Podaj trzy liczby: ";
    cin >> x1 >> x2 >> x3;

    if (x1 > x2) {
        if (x1 > x3) {
            cout << "x1 = " << x1;
        }
        else {
            cout << "x3 = " << x3;
        }
    }
    else {
        if (x2 > x3) {
            cout << "x2 = " << x2;
        }
        else {
            cout << "x3 = " << x3;
        }
    }
    cout << ", jest najwieksze.\n";
}
