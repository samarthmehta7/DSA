#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums;
    map<int, int> mpp;
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {

            if (mpp.find(0 - (nums[i] + nums[j])) != mpp.end())
            {

                ans[];
                ans.push_back(nums[j]);
                ans.push_back(mpp[0 - (nums[i] + nums[j])]);
            }
            mpp[nums[j]] = nums[j];
        }
    }
    return ans;
}