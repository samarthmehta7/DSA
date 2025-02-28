#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int num = 371;
    int ans = 0;
    int temp = num;
    while (temp != 0)
    {
        int r = temp % 10;
        ans = ans + r * r * r;
        temp = temp / 10;
    }
    if (ans == num)
    {
        return true;
    }
    else return false;
}