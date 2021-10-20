#include <iostream>
using namespace std;

int main()
{
    int size, i, j;
    cout << "enter Size::  ";
    cin >> size;
    int a[size];
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < size - 1; ++i)
    {
        for (j = i; j >= 0; j--)
        {
            if (a[j + 1] < a[j])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
        for (j = 0; j < size; j++)
        {
            cout << a[j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nSorted array::  ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";

    return 0;
}