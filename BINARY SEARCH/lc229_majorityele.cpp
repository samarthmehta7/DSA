#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{3, 2, 3};
    int count1 = 0;
    int count2 = 0;
    int n = nums.size();
    int element1 = INT_MIN;
    int element2 = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count1 == 0 && nums[i] != element2)
        {
            element1 = nums[i];
            count1 = 1;
        }
        else if (count2 == 0 && nums[i] != element1)
        {
            element2 = nums[i];
            count2 = 1;
        }
        else if (nums[i] == element1)
        {
            count1++;
        }
        else if (nums[i] == element2)
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    int check1 = 0, check2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == element1)
        {
            check1++;
        }
        else if (nums[i] == element2)
        {
            check2++;
        }
    }
    if (check1 > n / 3)
    {
        cout << element1 << endl;
    }
    if (check2 > n / 3)
    {
        cout << element2;
    }
    // map<int, int> mpp;
    // int n = nums.size();
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     mpp[nums[i]]++;
    // }
    // for (auto it : mpp)
    // {
    //     if (it.second > n / 3)
    //     {
    //         cout << it.first;
    //     }
    // }
}