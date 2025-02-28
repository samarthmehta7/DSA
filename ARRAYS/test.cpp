#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{3, 1, -2, -5, 2, -4};
    vector<int> ans(nums.size());
    int posi = 0;
    int negi = 1;
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
    for (auto it : ans)
    {
        cout << it << " ";
    }
}