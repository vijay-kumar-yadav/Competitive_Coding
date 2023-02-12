#include <bits/stdc++.h>

using namespace std;

int main()
{
    // iterators
    // begin(), end(), rbegin(), rend()
    // reverse begin rbegin
    // end() point to the address right after the last element
    // rend() poitnt to before the start element
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << endl;
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";
    cout << endl;
    // for each loop
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    string str = "xyz";
    for (auto s : str)
        cout << s << " ";

    // size
    cout << arr.size();
    // front
    cout << arr.front();
    // back
    cout << arr.back();

    return 0;
}