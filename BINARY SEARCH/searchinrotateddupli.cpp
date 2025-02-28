#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int binarysearch(vector<int> nums, int start, int pivotid, int k)
{
    int st = start;
    int end = pivotid;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (k == nums[mid])
        {
            return mid;
        }
        else if (k > nums[mid])
        {
            st = mid + 1;
        }
        else if (k < nums[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}
int pivot(vector<int> nums)
{
    int st = 0;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        while (st < end && nums[st] == nums[st + 1])
        {
            st++;
        }
        while (st < end && nums[end] == nums[end - 1])
        {
            end--;
        }
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
    vector<int> nums{1, 0, 1, 1, 1};
    int target = 0;
    int pivotindex = pivot(nums);
    cout << pivotindex;
    if (binarysearch(nums, 0, pivotindex, target) != -1)
    {
        cout << "Found at " << binarysearch(nums, 0, pivotindex, target);
    }
    else if (binarysearch(nums, pivotindex + 1, nums.size() - 1, target) != -1)
    {
        cout << "Found at " << binarysearch(nums, pivotindex + 1, nums.size() - 1, target);
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
}