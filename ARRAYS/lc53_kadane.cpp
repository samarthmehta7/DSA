#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0;
    int maxi = INT_MIN;
    int ansstart = -1;
    int ansend = -1;
    int start = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansstart = start;
            ansend = i;
        }
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    for (int i = ansstart; i <= ansend; i++)

    {
        cout << nums[i] << " ";
    }
    // int sum = 0;  //not optimal as kadane
    // int maxi = INT_MIN;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < nums.size(); j++)

    //     {
    //         sum += nums[j];
    //         maxi = max(sum, maxi);
    //     }
    // }
    // cout << maxi;
}