#include <iostream>
#include "complex0.h"
#include "complex.cpp"

using namespace std;

int main()
{
    Complex a(3.0, 4.0);
    Complex c;
    cout << a;
    cout << "Podaj liczbe zespolona (k, aby zakonczyc):\n";
    while (cin >> c)
    {
        cout << "c to " << c << '\n';
        cout << "sprrzezona z c to " << -c << "\n";
        cout << "a to " << a << "\n";
        cout << "a + c wynosi " << a + c << "\n";
        cout << "a - c wynosi " << a - c << "\n";
        cout << "a * c wynosi " << a * c << "\n";
        cout << "2 * c wynosi " << 2 * c << "\n";
        cout << "Podaj liczbe zespolona (k, aby zakonczyc):\n";
    }
    cout << "Gotowe!\n";
    return 0;
}