#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{

    vector<vector<int>> grid{{0, 1, 1}, {1, 0, 1}, {0, 0, 1}};
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> diff(m, vector<int>(n, 0));
    vector<int> colsum;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            count += grid[j][i];
        }
        colsum.push_back(count);
    }
    for (auto it : colsum)
    {
        cout << it << " ";
    }
    cout << endl;
    int sumrow1 = 0;
    int sumrow0 = 0;
    for (int i = 0; i < m; i++)
    {
        sumrow1 = accumulate(grid[i].begin(), grid[i].end(), 0);
        sumrow0 = m - sumrow1;

        for (int j = 0; j < n; j++)
        {
            int sumcol1 = colsum[j];
            int sumcol0 = n - sumcol1;
            // if (i == 0 && j == 2)
            // {
            //     cout << sumrow1 << " ";
            //     cout << sumrow0 << " ";
            //     cout << sumcol1 << " ";
            //     cout << sumcol0 << " ";
            // }
            // cout << sumrow1 + sumcol1 - sumrow0 - sumcol0 << " ";
            diff[i][j] = sumrow1 + sumcol1 - sumrow0 - sumcol0;
        }
        // cout << endl;
    }
    // cout << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << diff[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}