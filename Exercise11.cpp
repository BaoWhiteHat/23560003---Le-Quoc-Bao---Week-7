#include <iostream>
#include <vector>
using namespace std;

int findMin(const vector<int> &arr, int n)
{
    if (n == 1) 
        return arr[0];
    else 
        return min(arr[n - 1], findMin(arr, n - 1));
}

int main()
{
    vector<int> arr = {3, 5, 7, 2, 8};
    int n = arr.size();
    cout << "Minimum element is: " << findMin(arr, n) << endl;
    return 0;
}
