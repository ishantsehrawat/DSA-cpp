#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    int i;
    cout << "\nvector 1::  ";
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }

    vector<int>::iterator it;
    cout << "\niterator type::  ";
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << "\nauto type::  ";
    for (auto element : vec)
    {
        cout << element << "\t";
    }
    vec.pop_back();
    // vec Now:-1 2

    vector<int> v2(3, 50);
    // 50 50 50
    cout << "\n\nvector2::  ";
    for (auto element : v2)
    {
        cout << element << "\t";
    }
    swap(vec, v2);
    cout << "\n\n\nnew vector1::  ";
    for (auto element : vec)
    {
        cout << element << "\t";
    }
    cout << "\nnew vector2::  ";
    for (auto element : v2)
    {
        cout << element << "\t";
    }

    return 0;
}