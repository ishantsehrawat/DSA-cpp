// TODO:create a max till i array
// eg:-       1 0 5 2 7
// maxTilli:- 1 1 5 5 7  (either same or incresing)

#include <iostream>
using namespace std;

int main()
{
    int i, size;
    cout << "enter Size::  ";
    cin >> size;
    int a[size];
    cout << "Enter Array::  ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < size; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] = a[i - 1];
        }
    }
    cout << "\n\nMax till i array::  ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
}