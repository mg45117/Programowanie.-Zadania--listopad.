#include <iostream>
using namespace std;

int main()
{
    // 2.9

    int x;
    
    cout << "Podaj liczbe x: ";
    cin >> x;

    for (int i = x; i <= 100; i+=3) {
        cout << i << ' ';
    }
    cout << '\n';
}
