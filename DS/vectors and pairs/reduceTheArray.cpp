// TODO:reduce the array      10 16 7 14 5 3 12 9
// Reduce: replace the number with its order
// Reduction of above array   4  7  2 6  1 0 5  3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// compare operator
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    int i;

    // Initialising pair
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    cout << "Original array::\t";
    for (i = 0; i < v.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    // Sortingpair with indexes
    sort(v.begin(), v.end(), myCompare);
    for (i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    cout << "\nReduced array::\t\t";
    for (i = 0; i < v.size(); i++)
    {
        cout << arr[i] << "\t";
    }
}