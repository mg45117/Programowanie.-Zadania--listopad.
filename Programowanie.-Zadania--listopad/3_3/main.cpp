#include <iostream>
using namespace std;

void WriteBiggerNumber(int, int);

int main()
{
    int x, y;

    cout << "Podaj x i y: ";
    cin >> x >> y;

    WriteBiggerNumber(x, y);
    cout << '\n';
}

void WriteBiggerNumber(int x, int y)
{
    if (x > y) {
        cout << x << " jest wieksze niz " << y;
    }
    else {
        cout << y << " jest wieksze albo rowne " << x;
    }
}
