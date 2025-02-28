#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 3, 4, 2, 2};
    int i = 0;
    while (nums[0] != nums[nums[0]])
    {

        swap(nums[i], nums[nums[i]]);
    }
    cout << nums[0];

    // map<int, int> mpp;
    // for (int i = 0; i < nums.size(); i++)
    // {

    //     if (mpp.find(nums[i]) != mpp.end())
    //     {
    //         cout << nums[i];
    //         break;
    //     }
    //     mpp[nums[i]]++;
    // }
}