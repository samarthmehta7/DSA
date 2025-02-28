#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int finddays(vector<int> weights, int cap)
{
    int count = 0;
    int result = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (count + weights[i] > cap)
        {
            result += 1;

            count = weights[i];
        }
        else
        {
            count += weights[i];
        }
    }
    return result;
}
int bs(vector<int> weights, int low, int high, int days)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = finddays(weights, mid);
        if (count <= days)
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
    vector<int> weights{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int maxi = INT_MIN;
    int days = 5;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
        maxi = max(weights[i], maxi);
    }
    cout << bs(weights, maxi, sum, days);
}