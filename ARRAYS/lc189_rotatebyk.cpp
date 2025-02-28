#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};
    int k;
    cin >> k;
    cout << endl;
    k = k % nums.size();
    int n = nums.size();

    reverse(nums.begin(), nums.begin() + (n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
    

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
