#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    sort(nums.begin(), nums.end());
    int count = 0;
    int maxi = INT_MIN;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - nums[i - 1] == 1)
        {
            count++;
            maxi = max(count, maxi);
        }
        else if (nums[i] != nums[i - 1])
        {
            count = 0;
        }
    }
    cout << maxi + 1;
}