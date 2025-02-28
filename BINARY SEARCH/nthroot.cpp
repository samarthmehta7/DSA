#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int nthroot(int x, int root)
{
    int st = 1;
    int end = x;
    int ans = 0;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (pow(mid, root) > x)
        {
            end = mid - 1;
        }
        else if (pow(mid, root) < x)
        {
            st = mid + 1;
            ans = mid;
        }

        if (pow(mid, root) == x)
        {
            return mid;
        }

        mid = st + (end - st) / 2;
    }
    return -1;
}

int main()
{
    int n = 64;
    int root = 4;
    cout << nthroot(n, root);
}