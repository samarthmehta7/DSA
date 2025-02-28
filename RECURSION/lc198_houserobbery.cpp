#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int robberyAmount(vector<int> &nums, int i)
{
    if (i >= nums.size())
    {
        return 0;
    }
    int rob1 = nums[i] + robberyAmount(nums, i + 2);
    int rob2 = 0 + robberyAmount(nums, i + 1);
    return max(rob1, rob2);
}
int main()
{
    vector<int> nums{2, 7, 9, 3, 1};
    int maxi = INT_MIN;
    cout << robberyAmount(nums, 0);
}