#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> arr{{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int mini = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        auto it = distance(arr[i].begin(), lower_bound(arr[i].begin(), arr[i].end(), 1));
        if (it < mini)
        {
            mini = it;
            index = i;
        }
    }
    cout << "count of 1's-->" << arr[0].size() - mini << endl;
    cout << "row index--> " << index;
}