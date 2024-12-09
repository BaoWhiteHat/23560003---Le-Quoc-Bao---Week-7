#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else

    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter non negative integer : ";
    cin >> n;
    
   if ( n < 0) {
       cout << "Factorial is not defined for negative integers." << endl;
   } else {
       cout << n << "! = " << factorial(n) << endl;
   }
}

