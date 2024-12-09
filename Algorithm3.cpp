#include <iostream>
#include <cmath> 
using namespace std;

int gcd(int a, int b)
{
    if (a == 0) 
    {
        return b;
    }
    return gcd(b % a, a); 
}

int main()
{
    int a, b;
    cout << "Enter two integers to find their GCD:\n";

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    a = abs(a);
    b = abs(b);

    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << '\n';

    return 0;
}
