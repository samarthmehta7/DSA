#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findcount(vector<int> arr, int pages)
{
    int countstudent = 1;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (count + arr[i] <= pages)
        {

            count += arr[i];
        }
        else
        {
            countstudent++;
            count = arr[i];
        }
    }

    return countstudent;
}
int bs(vector<int> arr, int low, int high, int m)
{
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (findcount(arr, mid) <= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{12, 34, 67, 90};
    int m = 2;
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(arr[i], maxi);
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << bs(arr, maxi, sum, m);
}