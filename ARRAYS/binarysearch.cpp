#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int binarysearch(vector<int> nums, int key)
{
    int st = 0;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (key == nums[mid])
        {
            return mid;
        }
        else if (key > nums[mid])
        {
            st = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}
int firstoccurence(vector<int> nums, int key)
{
    int st = 0;
    int index = -1;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (key == nums[mid])
        {
            index = mid;
            end = mid - 1;
        }
        else if (key > nums[mid])
        {
            st = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return index;
}
int lastoccurence(vector<int> nums, int key)
{
    int st = 0;
    int index = -1;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (key == nums[mid])
        {
            index = mid;
            st = mid + 1;
        }
        else if (key > nums[mid])
        {
            st = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return index;
}
int main()
{
    vector<int> nums{1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int target = 9;
    int index = binarysearch(nums, target);
    int firstindex = firstoccurence(nums, target);
    int lastindex = lastoccurence(nums, target);
    cout << index << endl;
    cout << firstindex << endl;
    cout << lastindex << endl;
    auto it1 = lower_bound(nums.begin(), nums.end(), target);
    auto it2 = upper_bound(nums.begin(), nums.end(), target) - 1;
    cout << it1 - nums.begin() << endl;
    cout << it2 - nums.begin() << endl;
    cout << "Total Occurences is :" << it2 - it1 + 1;
    // if (binary_search(nums.begin(), nums.end(), target))
    // {

    //     cout << " FOUNd";
    // }
    // else
    // {
    //     cout << "NOT FOUNd";
    // }
}