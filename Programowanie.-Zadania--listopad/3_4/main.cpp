#include <iostream>
using namespace std;

int Multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y;

    cout << "Podaj x i y: ";
    cin >> x >> y;

    int wynik = Multiply(x, y);
    cout << x << " * " << y << " = " << wynik << '\n';
}


