#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 0, 1, 2, 0, 0, 4, 5, 0, 7, 9, 0};
    int j=-1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for (auto it : nums)
    {
        cout << it << " ";
    }
    // vector<int> temp;  brute approach
    // int count = 0;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != 0)
    //     {
    //         temp.push_back(nums[i]);
    //         count++;
    //     }
    // }
    // int n = nums.size() - count;
    // for (int i = 0; i < n; i++)
    // {
    //     temp.push_back(0);
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout << temp[i] << " ";
    // }
}