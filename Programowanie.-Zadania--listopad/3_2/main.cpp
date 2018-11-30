#include <iostream>
using namespace std;

void NewLines(int);

int main()
{
    cout << "Pierwsza linia.";
    NewLines(4);
    cout << "Druga linia.";
    NewLines(1);
}

void NewLines(int count)
{
    for (int i = 0; i < count; ++i) {
       cout << '\n';
    }
}
