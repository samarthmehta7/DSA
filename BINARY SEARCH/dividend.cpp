#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int divideit(int num, int div)
{
    int st = 0;
    int end = abs(num);
    int ans = 0;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (abs(mid * div) > num)
        {
            end = mid - 1;
        }
        else if (abs(mid * div) < num)
        {
            st = mid + 1;
            ans = mid;
        }

        if (abs(mid * div) == num)
        {
            return mid;
        }

        mid = st + (end - st) / 2;
    }
    return ans;
}

int main()
{
    int n = -100;
    int d = -10;
    int remainder = 0;
    int quotient = divideit(n, d);
    remainder = n - (quotient * d);
    cout << "quotient is --> " << quotient << endl;
    cout << "remainder is --> " << remainder << endl;
}