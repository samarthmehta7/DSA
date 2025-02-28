#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findMinimumcosts(vector<int> &days, vector<int> &costs, int i)
{
    // base condition
    if (i >= days.size())
    {
        return 0;
    }
    // 1-day pass
    int costs1 = costs[0] + findMinimumcosts(days, costs, i + 1);
    // 7-day pass
    int passEndDay = days[i] + 7 - 1;
    int j = i;
    while (days[j] < passEndDay && j < days.size())
    {
        j++;
    }
    int costs7 = costs[1] + findMinimumcosts(days, costs, j);
    // 30-day pass
    passEndDay = days[i] + 30 - 1;
    j = i;
    while (days[j] < passEndDay && j < days.size())
    {
        j++;
    }
    int costs30 = costs[2] + findMinimumcosts(days, costs, j);
    return min(costs1, min(costs7, costs30));
}
int main()
{
    vector<int> days{1, 4, 6, 7, 8, 20};
    vector<int> costs{2, 7, 15};
    cout << findMinimumcosts(days, costs, 0);
}