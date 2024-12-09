#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> L1, vector<int> L2)
{
    vector<int> L;

    while (!L1.empty() && !L2.empty())
    {

        if (L1.front() < L2.front())
        {
            L.push_back(L1.front());
            L1.erase(L1.begin());
        }
        else
        {
            L.push_back(L2.front());
            L2.erase(L2.begin());
        }

        if (L1.empty())
        {
            L.insert(L.end(), L2.begin(), L2.end());
            break;
        }
        else if (L2.empty())
        {
            L.insert(L.end(), L1.begin(), L1.end());
            break;
        }
    }

    return L;
}

int main()
{
    vector<int> L1 = {2, 3, 5, 6};
    vector<int> L2 = {1, 4};

    cout << "List 1: ";
    for (int num : L1)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "List 2: ";
    for (int num : L2)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> mergedList = merge(L1, L2);

    cout << "Merged List: ";
    for (int num : mergedList)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
