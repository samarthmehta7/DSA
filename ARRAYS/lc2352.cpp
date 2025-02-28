#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> grid{{3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
    map<vector<int>, int> mpp;
    for (int i = 0; i < grid.size(); i++)
    {
        mpp[grid[i]]++;
    }
    cout << "original version" << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (i < j)
            {
                swap(grid[i][j], grid[j][i]);
            }
        }
    }
    cout << "transpose version" << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        if (mpp.find(grid[i]) != mpp.end())
        {
            count += mpp[grid[i]];
        }
    }
    cout << count;
}