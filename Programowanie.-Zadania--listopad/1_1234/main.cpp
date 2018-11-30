
#include <iostream>
#include <cstdio>   // C++
#include <stdio.h>  // C
using namespace std;

int main() 
{
    // 1.1
    int i = -1002; 
    float f = 412.124f; 
    char c = 'c'; 
    
    cout << "i = " << i << "\nf = " << f << "\nc = " << c << endl;

    // 1.2
    int i2 = 0;
    printf("i2 = %d\n", i2);

    // 1.3
    int d = 0;
    cout << "Podaj liczbe, ktora chcesz podniesc do kwadratu: ";
    cin >> d;
    cout << "kwadrat liczby " << d << " = " << d*d << endl;
    
    // 1.4
    int e = 0;
    cout << "Podaj liczbe, ktora chcesz sprawdzic: ";
    cin >> e;

    if (e < 0) {
        cout << "e jest mniejsze od zera\n";
    }
    else if (e == 0) {
        cout << "e jest rowne zero\n";
    }
    else {
        cout << "e jest wieksze od zera\n";
    }
}
