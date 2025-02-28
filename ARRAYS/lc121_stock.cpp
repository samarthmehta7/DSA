#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int maxi = 0;
    int profit = 0;
    int mini = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {

        profit = prices[i] - mini;
        maxi = max(profit, maxi);
        mini = min(mini, prices[i]);
    }

    cout << maxi;
}