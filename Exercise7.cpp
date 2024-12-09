#include <iostream>
using namespace std;

int multiply_recursive(int n, int x)
{
    if (n == 0)
        return 0;
    return x + multiply_recursive(n - 1, x);
}

int main()
{
    int n, x;
    cout << "Enter the first number (n): ";
    cin >> n;
    cout << "Enter the second number (x): ";
    cin >> x;
    cout << "The result of " << n << " * " << x << " is: " << multiply_recursive(n, x) << endl;
    return 0;
}