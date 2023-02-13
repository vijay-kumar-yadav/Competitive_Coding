#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 5 x 6 x 7 int arr[10][20][30]
    vector<int> vec1(5);
    vector<vector<int>> vec2(5, vector<int>(5));
    vector<vector<vector<int>>> vec3(5, vector<vector<int>>(6, vector<int>(7, 0)));
    cout << vec3.size() << endl;
    for (auto row : vec3)
    {
        for (auto col : row)
        {
            for (auto height : col)
            {
                cout << height << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}