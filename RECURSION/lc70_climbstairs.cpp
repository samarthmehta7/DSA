#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int climbstairs(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return climbstairs(num - 1) + climbstairs(num - 2);
}
int main()
{
    int n = 45;
    cout << climbstairs(n);
}