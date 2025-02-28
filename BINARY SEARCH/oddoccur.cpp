#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int oddOccuring(vector<int> nums)
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
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid + 1])
            {
                st = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid ;
            }
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}

int main()
{
    vector<int> nums{3, 3, 7, 7, 10, 11, 11};
    cout << oddOccuring(nums) << endl;
    cout << nums[oddOccuring(nums)];
}