#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {

            if (nums[i] + nums[j] + nums[k] == 0)
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k - 1])
                {
                    k--;
                }
            }
            else if (nums[i] + nums[j] + nums[k] < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    //     set<vector<int>> st;

    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         set<int> hashset;
    //         for (int j = i + 1; j < nums.size(); j++)
    //         {
    //             int target = -(nums[i] + nums[j]);
    //             if (hashset.find(target) != hashset.end())
    //             {
    //                 vector<int> temp = {nums[i], nums[j], target};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //             hashset.insert(nums[j]);
    //         }
    //     }
    //     vector<vector<int>> ans(st.begin(), st.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ",";
        }
        cout << endl;
    }
}