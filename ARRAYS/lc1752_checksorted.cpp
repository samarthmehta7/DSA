#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};

    int count = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            count++;
        }
    }
    if (nums[nums.size() - 1] > nums[0])
    {
        count++;
    }
    cout << count << endl;
}
