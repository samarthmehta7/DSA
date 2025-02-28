#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{

    vector<int> nums{3, 1, -2, -5, 2, -4};
    // vector<int> posi;
    // vector<int> negi;
    int posi = 0;
    int negi = 1;
    vector<int> ans(nums.size(), 0);

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            ans[posi] = nums[i];
            posi += 2;
        }
        else
        {
            ans[negi] = nums[i];
            negi += 2;
        }
    }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] > 0)
    //     {
    //         posi.push_back(nums[i]);
    //     }
    //     else
    //     {
    //         negi.push_back(nums[i]);
    //     }
    // }

    // for (int i = 0; i < nums.size() / 2; i++)
    // {
    //     ans[i * 2] = posi[i];
    //     ans[i * 2 + 1] = negi[i];
    // }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}