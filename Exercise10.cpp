#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int> &arr, int n)
{
    if (n == 1) 
        return arr[0];
    else 
        return max(arr[n - 1], findMax(arr, n - 1));
}

int main()
{
    vector<int> arr = {3, 5, 7, 2, 8};
    int n = arr.size();
    cout << "Maximum element is: " << findMax(arr, n) << endl;
    return 0;
}
