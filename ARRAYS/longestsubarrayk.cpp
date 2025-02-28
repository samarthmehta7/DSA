#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<long long> arr{10, 5, 2, 7, 1, -10};
    map<long long, long long> mpp;
    long long sum = 0;
    long long k = 15;
    long long maxi = 0;

    for (long long i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxi = max(maxi, i + 1);
        }

        if (mpp.find(sum - k) != mpp.end())
        {
            maxi = max(maxi, i - mpp[sum - k]);
        }
        if (mpp.find(sum) != mpp.end())
        {
            mpp[sum] = i;
        }
    }
    cout << maxi;
}

// int i = 0, j = 0; BRUTE NOT OPTIMAL
// int k = -5;
// int maxi = 0;
// int sum = 0;

// while (i < arr.size())
// {
//     if (j == arr.size())
//     {
//         i++;
//         j = i;
//         sum=0;
//     }
//     sum = sum + arr[j];
//     if (sum == k)
//     {

//         maxi = max(maxi, j - i + 1);

//     }
//     j++;
// }
// cout << maxi;
