#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findresult(vector<int> nums, int th, int k)

{
    double ans = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = double(nums[i]) / k;
        count += ceil(ans);
    }

    return count;
}
int bs(vector<int> nums, int low, int high, int th)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = findresult(nums, th, mid);
        if (count <= th)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums{1, 2, 5, 9};
    int threshold = 6;
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
    }
    cout << bs(nums, 1, maxi, threshold);
}