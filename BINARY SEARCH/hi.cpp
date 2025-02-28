#include <bits/stdc++.h>
using namespace std;

int finddays(vector<int> nums, int cap)
{
    int count = 0;
    int days = 1; // Start with 1 day
    for (int i = 0; i < nums.size(); i++)
    {
        if (count + nums[i] > cap)
        {
            days++;          // Need an additional day
            count = nums[i]; // Start new day with current package
        }
        else
        {
            count += nums[i];
        }
    }
    return days;
}

int bs(vector<int> nums, int low, int high, int days)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = finddays(nums, mid);
        if (count <= days)
        {                   // Check if `mid` capacity works within `days`
            ans = mid;      // Update the answer
            high = mid - 1; // Try for a smaller capacity
        }
        else
        {
            low = mid + 1; // Increase capacity
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int maxi = INT_MIN;
    int days = 5;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(nums[i], maxi);
    }
    cout << bs(nums, maxi, sum, days);
    return 0;
}
