#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int i, int j, int x){
    if(arr[i] == x)
    {
        return i + 1;
    } 
    else if (i == j) 
    {
        return 0;
    } 
    else 
    {
        return search(arr, i + 1, j, x);
    }
}

int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> x;

    int result = search(arr, 0, n - 1, x);

    if(result != 0) 
    {
        cout << "Element found at position (1-based index): " << result << '\n';
    }
    else
    {
        cout << "Element not found in the array." << '\n';
    }

    return 0;
}