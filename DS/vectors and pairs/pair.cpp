#include <iostream>
using namespace std;

int main()
{
    pair<int, char> p;
    p.first = 3;
    p.second = 'i';
    cout << "pair.first::" << p.first << "\tpair.second::" << p.second;
    return 0;
}