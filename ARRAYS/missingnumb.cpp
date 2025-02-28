#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int missingelement(vector<int> nums)
{
    int st = 0;
    int ans = -1;

    int end = nums.size() - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (nums[mid] == mid + 1)
        {
            st = mid + 1;
        }
        else
        {
            ans = nums[mid];
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans - 1;
}

int main()

{
    vector<int> nums{2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << missingelement(nums);
}