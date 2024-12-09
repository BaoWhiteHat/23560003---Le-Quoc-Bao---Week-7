#include <iostream>
using namespace std;

int square(int n) {
    if (n == 0) 
        return 0;
    else 
        return square(n - 1) + 2 * n - 1;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << n << "^2 = " << square(n) << endl;
    return 0;
}
