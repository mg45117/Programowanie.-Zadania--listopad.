#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Podaj x i y: ";
    cin >> x >> y;
    
    for (int i = x+1; i < y; ++i) {
        std::cout << i << ' '; 
    }
    std::cout << '\n';
}
