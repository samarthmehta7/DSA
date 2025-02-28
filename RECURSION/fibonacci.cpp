#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n = 22;
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << endl;
    }
}