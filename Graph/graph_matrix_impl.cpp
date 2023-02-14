#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int adjacencyMatrix[n + 1][m + 1] = {{0, 0}};
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}