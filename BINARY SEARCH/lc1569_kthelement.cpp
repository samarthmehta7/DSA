#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int bs(vector<int> arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;
    int missing = 0;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        missing = arr[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high + 1 + k;
}
int main()
{
    vector<int> arr{2, 3, 4, 7, 11};

    int k = 5;
    cout << bs(arr, k);

    // int maxi = INT_MIN;
    // int count = 0;
    // int k = 654;
    // int ans = 0;
    // int size = 1000 + k + 1;
    // vector<int> hash(size);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     hash[arr[i]]++;
    // }
    // maxi = arr[arr.size() - 1];
    // for (int i = 1; i < hash.size(); i++)
    // {
    //     if (hash[i] == 0)
    //     {
    //         count++;
    //     }
    //     if (count == k)
    //     {
    //         cout << i;
    //         break;
    //     }
    //     ans = i;
    // }
    // cout << ans;
}