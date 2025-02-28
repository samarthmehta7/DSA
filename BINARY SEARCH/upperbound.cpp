#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int upperbound(vector<int> nums, int key)
{
    int low = 0;
    int index = -1;
    int index2 = -1;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (nums[mid] > key)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }

    return index;
}
int main()
{
    vector<int> nums{1, 2, 3, 5, 7, 8, 9};
    int k = 6;
    cout << upperbound(nums, k) << endl;
    cout << upper_bound(nums.begin(), nums.end(), k) - nums.begin();
    if (binary_search(nums.begin(), nums.end(), target))
    {
        return {(upper_bound(nums.begin(), nums.end(), k) - nums.begin() - 1), lower_bound(nums.begin(), nums.end(), k)};
    }
    else
    {
        return {-1, -1};
    }
}
