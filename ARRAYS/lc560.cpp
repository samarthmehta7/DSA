#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int subarrayprefixsum(vector<int> &nums, int k)
{
    map<int, int> mpp;
    int count = 0;
    int prefixsum = 0;
    mpp[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        prefixsum += nums[i];
        if (mpp.find(prefixsum - k) != mpp.end())
        {
            count += mpp[prefixsum - k];
        }

        mpp[prefixsum]++;
    }
    return count;
}
int main()
{
    vector<int> nums{1, 1, 1};
    int key = 2;
    cout << subarrayprefixsum(nums, key);
}