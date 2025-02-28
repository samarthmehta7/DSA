#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 6, 3, 6, 38, 10};
    vector<int> brr{3, 6, 9, 11, 12, 7};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)

        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    // cout << ans;
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
}