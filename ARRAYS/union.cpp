#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 6, 8};
    vector<int> brr{9, 11, 12, 7};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // cout << ans;
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
}