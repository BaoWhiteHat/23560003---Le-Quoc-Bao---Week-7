#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(const vector<int> &L1, const vector<int> &L2)
{
    vector<int> L; 
    size_t i = 0, j = 0;


    while (i < L1.size() && j < L2.size())
    {
        if (L1[i] < L2[j])
        {
            L.push_back(L1[i++]); 
        }
        else
        {
            L.push_back(L2[j++]);
        }
    }

    while (i < L1.size())
    {
        L.push_back(L1[i++]);
    }
    while (j < L2.size())
    {
        L.push_back(L2[j++]);
    }

    return L;
}

vector<int> mergeSort(const vector<int> &L)
{
    int n = L.size();
    if (n <= 1)
    {
        return L; 
    }

    int m = n / 2;                            
    vector<int> L1(L.begin(), L.begin() + m); 
    vector<int> L2(L.begin() + m, L.end());   

    return merge(mergeSort(L1), mergeSort(L2));
}


int main()
{
    vector<int> list = {8, 2, 4, 6, 9, 7, 10, 1, 5, 3}; 

    cout << "Original List: ";
    for (int num : list)
    {
        cout << num << " ";
    }
    cout << endl;


    vector<int> sortedList = mergeSort(list);

    cout << "Sorted List: ";
    for (int num : sortedList)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
