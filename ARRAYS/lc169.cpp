#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{2, 2, 1, 1, 1, 2, 2}; // only if there is majority elemnt guararnteed
    int count = 0;
    int majelement = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            majelement = nums[i];
        }
        else if (majelement == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << majelement;

    // map<int, int> mpp; better but not optimal
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     mpp[nums[i]]++;
    // }

    // for (auto it : mpp)
    // {
    //     if (it.second > nums.size() / 2)
    //     {
    //         cout << it.first;
    //     }
    // }
}
