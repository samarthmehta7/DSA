#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5};
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    cout << i + 1;

    // int j = 1;
    // for (int i = 1; i < nums.size(); i++)
    // {
    //     if (nums[i] != nums[i - 1])
    //     {
    //         nums[j] = nus[i];
    //         j++;
    //     }
    // }
    // cout << j << endl;

    // set<int> st;  brute approach
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     st.insert nums[i]);
    // }
    // // cout << st.size() << endl;
    // int k = st.size();
    // nums.clear();
    // for (auto it : st)
    // {
    //     nums.push_back(it);
    // }
    // for (auto it : nums)
    // {
    //     cout << it << " ";
    // }
}