#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int cutrod(int n, int &x, int &y, int &z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    int a = cutrod(n - x, x, y, z) + 1;

    int b = cutrod(n - y, x, y, z) + 1;

    int c = cutrod(n - z, x, y, z) + 1;

    int ans = max(a, max(b, c));

    return ans;
}
int main()
{
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;
    int ans = cutrod(n, x, y, z);
    if (ans < 0)
    {
        cout << 0;
    }
    else
    {
        cout << ans;
    }
}