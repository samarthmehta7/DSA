#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int buySellStock(vector<int> &prices, int i, int &mini, int &profit)
{
    if (i == prices.size())
    {
        return profit;
    }
    mini = min(mini, prices[i]);
    profit = max(profit, prices[i] - mini);
    return buySellStock(prices, i + 1, mini, profit);
}
int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int mini = INT_MAX;
    int profit = 0;
    cout << buySellStock(prices, 0, mini, profit);
}