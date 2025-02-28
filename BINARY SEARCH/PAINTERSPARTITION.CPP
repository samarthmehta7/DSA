#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findpainter(vector<int> nums, int time)
{
    int countpainter = 1;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (count + nums[i] <= time)
        {

            count += nums[i];
        }
        else
        {
            countpainter++;
            count = nums[i];
        }
    }

    return countpainter;
}
int bs(vector<int> nums, int low, int high, int m)
{
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (findpainter(nums, mid) <= m)
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
    vector<int> nums{2, 1, 5, 6, 2, 3};
    int k = 2;
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(nums[i], maxi);
    }
    int sum = accumulate(nums.begin(), nums.end(), 0);
    cout << bs(nums, maxi, sum, k);
}