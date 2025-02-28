#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 6, 8};
    vector<int> brr{3, 6, 9, 11, 12, 7};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)

        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
        {
            ans.push_back(brr[i]);
        }
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