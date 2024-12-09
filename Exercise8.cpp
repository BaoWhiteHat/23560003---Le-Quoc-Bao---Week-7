#include<iostream>
using namespace std;

int sum_first_n(int n)
{
    if(n == 1)
        return 1;
    return n + sum_first_n(n - 1);
}

int main()
{

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of the first " << n << " positive integers is : " << sum_first_n(n) << endl;
}