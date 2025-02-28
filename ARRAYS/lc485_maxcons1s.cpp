#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    int maxi = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else if (nums[i] != 1)
        {
            maxi = max(count, maxi);
            count = 0;
        }
        if (i == nums.size() - 1)
        {
            maxi = max(count, maxi);
        }
    }
    cout << "MAXIMUM COUNT IS " << maxi;

    // vector<int> ans;
    // int count = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] == 1)
    //     {
    //         count++;
    //     }
    //     else if (nums[i] != 1)
    //     {
    //         ans.push_back(count);
    //         count = 0;
    //     }
    //     if (i == nums.size() - 1)
    //     {
    //         ans.push_back(count);
    //     }
    // }

    // int max_count = *max_element(ans.begin(), ans.end());
    // cout << "The maximum " << max_count << endl;
}