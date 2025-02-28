#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{2, 7, 1, 9, 15, 10};
    int target = 9;
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mpp.find(target - nums[i]) != mpp.end())
        {
            cout << i << " " << mpp[target - nums[i]];
            break;
        }
        mpp[nums[i]] = i;

    }

    // sort(nums.begin(), nums.end());
    // int i = 0, j = nums.size() - 1;
    // while (i < j)
    // {
    //     if (nums[i] + nums[j] == target)
    //     {
    //         cout << i << j; // note this index is after sorting the array
    //         break;
    //     }
    //     else if (nums[i] + nums[j] < target)
    //     {
    //         i++;
    //     }
    //     else if (nums[i] + nums[j] > target)
    //     {
    //         j--;
    //     }
    // }
}