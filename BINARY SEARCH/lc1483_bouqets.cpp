#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool finddays(vector<int> bloomDay, int day, int m, int n)
{
    int ans = 0;
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= day)
        {
            count++;
        }
        else
        {
            ans += count / n;
            count = 0;
        }
    }
    ans += count / n;

    if (ans >= m)
    {
        return true;
    }

    return false;
}
int bs(vector<int> bloomDay, int low, int high, int m, int n)
{
    int mid = low + (high - high) / 2;
    int ans1 = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        // int counter = finddays(bloomDay, mid, m, n);
        if (finddays(bloomDay, mid, m, n))
        {
            ans1 = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans1;
}
int main()
{
    vector<int> bloomDay{1, 10, 3, 10, 2};
    int m = 3;
    int n = 1;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        mini = min(bloomDay[i], mini);
        maxi = max(bloomDay[i], maxi);
    }
    cout << bs(bloomDay, mini, maxi, m, n);
}
