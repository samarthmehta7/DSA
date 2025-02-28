#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void printdigits(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n % 10 << endl;
    return printdigits(n / 10);
}
int main()
{
    int num = 647;
    printdigits(num);
}
