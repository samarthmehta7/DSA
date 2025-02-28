#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int peakelement(vector<int> nums)
{
    int st = 0;
    int ans = -1;

    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st < end)
    {

        if (nums[mid] > nums[mid + 1])
        {
            end = mid;
            // ans = nums[mid];
        }
        else
        {
            st = mid + 1;
        }
        mid = st + (end - st) / 2;
    }
    return st;
}

int main()

{
    vector<int> nums{1, 2, 1, 3, 5, 6, 4};
    cout << peakelement(nums);
}