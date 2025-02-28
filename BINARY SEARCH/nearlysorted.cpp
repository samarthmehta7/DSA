#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int binarysearchnearlysorted(vector<int> nums, int key)
{
    int st = 0;
    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (nums[mid] == key)
        {
            return mid;
        }
        else if (nums[mid - 1] == key && mid - 1 >= 0)
        {
            return mid - 1;
        }
        else if (nums[mid + 1] == key && mid + 1 < nums.size())
        {
            return mid + 1;
        }
        else if (nums[mid] > key)
        {
            end = mid - 2;
        }
        else if (nums[mid] < key)
        {
            st = mid + 2;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}
int main()
{
    vector<int> nums{2, 1, 10, 20, 35, 30, 50};
    int target = 35;
    cout << binarysearchnearlysorted(nums, target);
}