#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (i < j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // vector<vector<int>> ans(3, vector<int>(3));
    // int m = matrix.size();
    // int n = matrix[0].size();
    // int index = n - 1;
    // cout << "ENTER THE MATRIX" << endl;
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[i].size(); j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[j][n - 1 - i] = matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}