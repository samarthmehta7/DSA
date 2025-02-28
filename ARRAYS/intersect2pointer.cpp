#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums1{1,1,2,3,4,4, 5,9};
    vector<int> nums2{1,1,2,2,3,3,3,4,4,4,9, 4, 9, 8, 4};
    vector<int> ans;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }

            else if (nums1[i] > nums2[j])
            {
                j++;
            }
        }
    }
    
    // vector<int> ans;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums2.size(); j++)

    //     {
    //         if (nums[i] == nums2[j])
    //         {
    //             ans.push_back(nums[i]);
    //             nums2[j] = INT_MIN;
    //         }
    //     }
    // }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // cout << ans;
    // for (auto it : nums)
    // {
    //     cout << it << " ";
    // }
}