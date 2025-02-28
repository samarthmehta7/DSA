#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums{1, 2, 3, 4};
    map<int, int> mpp;
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    while (!mpp.empty())
    {
        vector<int> currentRow;
        for (auto it = mpp.begin(); it != mpp.end();)
        {
            if (it->second > 0)
            {
                currentRow.push_back(it->first);
                it->second--;
            }

            // If the frequency becomes 0, erase safely and update the iterator
            if (it->second == 0)
                it = mpp.erase(it); // ✅ Correct way to erase while iterating
            else
                ++it; // ✅ Move to next element
        }
        ans.push_back(currentRow);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}