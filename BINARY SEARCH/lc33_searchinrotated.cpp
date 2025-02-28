#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int binarysearch(vector<int> arr, int low, int high, int target)
{
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}
int pivotid(vector<int> arr)
{
    int low = 0;
    int ans = -1;
    int high = arr.size() - 1;
    int mid = low + (high - low) / 2;
    while (low < high)
    {
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid;
        }

        if (low == high)
        {
            return high;
        }
        mid = low + (high - low) / 2;
    }
    return ans;

}
int main()
{
    vector<int> arr{14, 17, 22, 41, 10};
    int target = 0;
    // cout << arr[pivotid(arr)];
    cout << pivotid(arr);
}
