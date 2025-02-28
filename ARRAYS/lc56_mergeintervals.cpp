#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        if (ans.empty() || ans.back()[1] < intervals[i][0])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ",";
        }
        cout << endl;
    }
}