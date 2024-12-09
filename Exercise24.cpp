#include <iostream>
using namespace std;
double power(double a, int n)
{
    if (n == 0) 
        return a;
    else 
        return power(a, n - 1) * power(a, n - 1);
}

int main()
{
    double a;
    int n;
    cout << "Enter a real number (a) and a positive integer (n): ";
    cin >> a >> n;
    cout << "a^(2^" << n << ") = " << power(a, n) << endl;
    return 0;
}
