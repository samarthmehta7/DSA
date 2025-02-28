#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{30, 10, 10, 5};
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    // int j = arr.size() - 2;
    // int i = arr.size() - 1;
    // while (j >= 0)

    // {

    //     if (arr[j] >= arr[i])
    //     {
    //         ans.push_back(arr[j]);
    //         i = j;
    //         j = i - 1;
    //     }
    //     else
    //     {
    //         j--;
    //     }
    // }
    // ans.push_back(arr[arr.size() - 1]);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}