#include <iostream>
#include <cmath>
using namespace std;


int power(int n, int m)
{
    if (n == 0)
    {
        return 1;
    }
    else

    {
        return m * power(n - 1, m);
    }
}

int main()
{
    int n, m;
    cout << "Enter base (m): ";
    cin >> m;

    cout << "Enter exponent (n): ";
    cin >> n;

    cout << m << "^" << n << " = " << power(n, m) << endl;

    return 0;
}
