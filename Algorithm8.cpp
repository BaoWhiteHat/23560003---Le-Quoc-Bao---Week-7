#include <iostream>
using namespace std;

int iterative_fibonacci(int n)
{
    if (n == 0)
    {
        return 0; 
    }

    int x = 0;
    int y = 1;
  
    for (int i = 1; i < n; i++)
    {
        int z = x + y; 
        x = y;         
        y = z;         
    }

    return y; 
}

int main()
{
    int n;
    cout << "Enter non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Fibonacci is not defined for negative integers." << endl;
    }
    else
    {
        cout << "The " << n << "th Fibonacci number is: " << iterative_fibonacci(n) << endl;
    }

    return 0;
}
