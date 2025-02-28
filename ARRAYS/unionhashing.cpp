#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 6, 8};
    vector<int> brr{3, 6, 9, 11, 12, 7};
    vector<int> hash(100, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int j = 0; j < brr.size(); j++)
    {
        hash[brr[j]]++;
    }

    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > 0)
        {
            cout << i << " ";
        }
    }
    // cout << ans;
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
}