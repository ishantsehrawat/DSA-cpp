#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, size, j;
    cout << "enter size::  ";
    cin >> size;

    vector<int> a(size);
    cout << "enter array::  ";
    for (i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
            // else
            // {
            //     break;
            // }
        }
        for (j = 0; j < a.size(); j++)
        {
            cout << a[j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n\nSorted array::  ";
    for (i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";

    return 0;
}