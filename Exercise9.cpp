#include<iostream>
using namespace std;

int sumOdd(int n)
{
    if ( n == 1)
    {
        return 1;
    }
    else 
    {
        return (2 * n - 1) + sumOdd( n - 1 );
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of the first " << n << " odd positive integers is: " << sumOdd(n) << "\n";
    return 0;
}