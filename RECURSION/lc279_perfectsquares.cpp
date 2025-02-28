#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int perfectSquare(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    int i = 1;
    int ans = INT_MAX;
    int end = sqrt(n);
    while (i <= end)
    {

        int square = i * i;
        int countSquares = 1 + perfectSquare(n - square);
        if (countSquares < ans)
        {
            ans = countSquares;
        }
        i++;
    }
    return ans;
}
int main()
{
    int n = 12;
    int ans = perfectSquare(n) - 1;
    cout << ans;
}