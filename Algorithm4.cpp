#include <iostream>
#include <cmath>
using namespace std;

int mpower(int b, int n, int m)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int half = mpower(b, n / 2, m);
        return (1LL * half * half) % m;
    }
    else
    {
        int half = mpower(b, n / 2, m);
        return (1LL * ((1LL * half * half) % m) * b) % m;
    }
}

int main()
{
    int n, m, b;
    cout << "Enter base b = ";
    cin >> b;

    cout << "Enter exponent n = ";
    cin >> n;

    cout << "Enter modulus m = ";
    cin >> m;

    cout << "Result: " << mpower(b, n, m) << "\n";

    return 0;
}
