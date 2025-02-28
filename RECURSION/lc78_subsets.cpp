#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void findSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &finalAns)
{
    if (i == nums.size())
    {
        finalAns.push_back(ans);
        return;
    }

    // exclude
    findSubsets(nums, ans, i + 1, finalAns);
    // include
    ans.push_back(nums[i]);
    findSubsets(nums, ans, i + 1, finalAns);
    ans.pop_back();
}
int main()
{
    vector<int> nums{1, 2, 3};
    vector<int> ans;
    vector<vector<int>> finalAns;
    findSubsets(nums, ans, 0, finalAns);
    for (int i = 0; i < finalAns.size(); i++)
    {
        for (int j = 0; j < finalAns[i].size(); j++)
        {
            cout << finalAns[i][j] << ",";
        }
        cout << endl;
    }
}