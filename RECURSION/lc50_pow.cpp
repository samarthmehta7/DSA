#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
double powfunction(double &x, int &n, int count)

{
    if (count == abs(n))
    {
        return 1;
    }

    if (n > 0)
    {
        return x * powfunction(x, n, count + 1);
    }
    else
    {
        return (1 / x) * powfunction(x, n, count + 1);
    }
}
int main()
{
    double x = -2;
    int n = -3;
    cout << powfunction(x, n, 0);
}