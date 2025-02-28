#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findtotalTrips(vector<int> &time, long long calctime)
{
    long long counttotalTrips = 0;
    for (int i = 0; i < time.size(); i++)
    {
        counttotalTrips += calctime / time[i];
    }
    return counttotalTrips;
}
long long bs(vector<int> &time, int totalTrips)
{
    long long low = 1;
    long long ans = -1;
    long long high = *min_element(time.begin(), time.end()) * totalTrips;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (findtotalTrips(time, mid) >= totalTrips)
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
    vector<int> time{2};
    int totalTrips = 1;
    cout << bs(time, totalTrips);
}