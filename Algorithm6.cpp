#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int binarySearch(const vector<int> &arr, int i, int j, int x)
{
    if (i > j)
    {
        return 0; // Not found
    }
    int m = (i + j) / 2; // Calculate the middle index
    if (arr[m] == x)
    {
        return m + 1; // Return 1-based index
    }
    else if (x < arr[m])
    {
        return binarySearch(arr, i, m - 1, x); // Search in the left half
    }
    else
    {
        return binarySearch(arr, m + 1, j, x); // Search in the right half
    }
}

int main()
{
    int n, x;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size. Must be greater than 0." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements of the array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != 0)
    {
        cout << "Element found at position (1-based index): " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
