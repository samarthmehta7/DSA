#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int find_gcd(int n, int k)
{
    if (n == 0)
    {
        return k;
    }
    if (k == 0)
    {
        return n;
    }
    return (n > k) ? find_gcd(n - k, k) : find_gcd(n, k - n);
}
int main()
{
    vector<int> nums{1, 2, 2, 2, 22};
    int maxi = *max_element(nums.begin(), nums.end());
    int mini = *min_element(nums.begin(), nums.end());
    cout << find_gcd(maxi, mini);
}