#include <iostream>
using namespace std;


int multiply(int x, int y)
{
    if (y == 0) 
        return 0;
    if (y % 2 == 0) 
        return 2 * multiply(x, y / 2);
    else 
        return 2 * multiply(x, y / 2) + x;
}

int main()
{
    int x, y;
    cout << "Enter two non-negative integers: ";
    cin >> x >> y;
    cout << x << " * " << y << " = " << multiply(x, y) << endl;
    return 0;
}
