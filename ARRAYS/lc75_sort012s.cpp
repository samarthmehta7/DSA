#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{0, 1, 1, 1, 0, 2, 2, 2, 1, 2, 0, 0, 0};
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid < high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {   
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for (auto it : nums)
    {
        cout << it << " ";
    }
}