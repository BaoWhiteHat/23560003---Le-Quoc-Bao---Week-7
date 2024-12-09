#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n == 1)

    {
        return 1;
    }

    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter non negative integer : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Fibonacci is not defined for negative integers." << endl;
    }
    else
    {
        cout << "The Fibonacci number at position " << n << " is " << fibonacci(n) << "." << endl;
    }
}
