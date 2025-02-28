#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int recursivebinarysearch(vector<int> arr, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return recursivebinarysearch(arr, low, mid - 1, target);
    }
    else
    {
        return recursivebinarysearch(arr, mid + 1, high, target);
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 55;
    if (recursivebinarysearch(arr, 0, arr.size() - 1, k) == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << "found ";
    }
}