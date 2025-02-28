#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findtime(vector<int> piles, int k)
{
    int count = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        double result = (double)piles[i] / k;

        count += ceil(result);
    }
    return count;
}
int bs(vector<int> piles, int high, int h)
{
    int low = 1;
    int mid = low + (high - high) / 2;
    int ans = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        int time = findtime(piles, mid);
        if (time <= h)
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
    vector<int> piles{1000000000};
    int k = 1;
    int h = 2;
    int maxi = INT_MIN;
    // float piless = static_cast<float>(23) / 6;
    for (int i = 0; i < piles.size(); i++)
    {
        maxi = max(maxi, piles[i]);
    }
    cout << bs(piles, maxi, h);
    // cout << "call the cuntion " << endl;

    // cout << findtime(piles, k, h);
}