#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n = 40;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            count++;
            for (int j = i * 2; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    cout << count;
}