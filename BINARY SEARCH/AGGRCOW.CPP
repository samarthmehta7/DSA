#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool findmindistance(vector<int> stalls, int cows, int dist)
{
    int countcow = 1;
    int last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= dist)
        {
            last = stalls[i];
            countcow++;
        }
    }
    if (countcow >= cows)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int bs(vector<int> stalls, int high, int cows)
{
    int low = 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (findmindistance(stalls, cows, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> stalls{6, 7, 9, 11, 13, 15};
    int cows = 4;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    sort(stalls.begin(), stalls.end());

    for (int i = 0; i < stalls.size(); i++)
    {
        mini = min(stalls[i], mini);
        maxi = max(stalls[i], maxi);
    }
    int high = maxi - mini;
    cout << bs(stalls, high, cows);
}