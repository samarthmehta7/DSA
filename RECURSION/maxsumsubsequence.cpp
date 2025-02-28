#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void maxSum(vector<int> &arr, int i, int sum, int &maxi)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include
    maxSum(arr, i + 2, sum + arr[i], maxi);
    // exclude
    maxSum(arr, i + 1, sum, maxi);
}
int main()
{
    vector<int> arr{2, 1, 4, 9};
    int sum = 0;
    int maxi = INT_MIN;
    maxSum(arr, 0, sum, maxi);
    cout << maxi;
}