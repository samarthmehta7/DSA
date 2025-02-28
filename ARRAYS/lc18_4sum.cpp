#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 0, -1, 0, -2, 2};
    int target = 8;
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (j != i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }
            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l)
            {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);

                    k++;
                    l--;

                    while (k < l && nums[k] == nums[k - 1])
                    {
                        k++;
                    }
                    while (k < l && nums[l] == nums[l + 1])
                    {
                        l--;
                    }
                }
                else if (sum < target)
                {

                    k++;
                }
                else
                {
                    l--;
                }
            }
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