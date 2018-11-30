#include <iostream>
using namespace std;

int main()
{
    // 2.8

    int x;

    cout << "Podaj liczbe x: ";
    cin >> x;

    for (int i = x-1; i > 0; --i) {
        cout << i << ' ';
    }
    cout << '\n';
}
