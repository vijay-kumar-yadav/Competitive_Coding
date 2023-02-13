#include <bits/stdc++.h>

using namespace std;

int main()
{
    // to defining 2d vectors
    vector<vector<int>> vec;

    vector<int> raj1;
    raj1.push_back(1);
    raj1.push_back(2);
    vector<int> raj2;
    raj2.push_back(3);
    raj2.push_back(4);
    vector<int> raj3;
    raj3.push_back(3);
    raj3.push_back(4);
    raj3.push_back(5);

    vec.push_back(raj1);
    vec.push_back(raj2);
    vec.push_back(raj3);

    for (auto row : vec)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // define vector 10 x 20
    vector<vector<int>> vec2(10, vector<int>(20, 5));
    for (auto row : vec2)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    vector<vector<int>> arr[4];
    for (auto row : vec2)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}