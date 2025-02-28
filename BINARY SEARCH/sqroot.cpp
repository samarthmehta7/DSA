#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int sqroot(int x)
{
    int st = 1;
    int end = x;
    int ans = 0;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (mid * mid > x)
        {
            end = mid - 1;
        }
        else if (mid * mid < x)
        {
            st = mid + 1;
            ans = mid;
        }

        if (mid * mid == x)
        {
            return mid;
        }

        mid = st + (end - st) / 2;
    }
    return ans;
}

int main()
{
    int n = 48;
    cout << sqroot(n);
}