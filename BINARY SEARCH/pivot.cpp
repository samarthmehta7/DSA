#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int pivot(vector<int> nums)
{
    int st = 0;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (st == end)
        {
            return st;
        }
        if (nums[mid] > nums[mid + 1] && mid + 1 < nums.size())
        {
            return mid;
        }

        else if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
        {
            return mid - 1;
        }
        else if (nums[mid] < nums[0])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}
int main()
{
    vector<int> nums{2, 3, 4, 7, 8};
    cout << nums[pivot(nums)];
}