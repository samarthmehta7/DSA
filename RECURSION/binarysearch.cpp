#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int bs(vector<int> &arr, int &key, int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low > high)
    {
        return -1;
    }
    if (arr[mid] < key)
    {
        return bs(arr, key, mid + 1, high);
    }
    else if (arr[mid] > key)
    {
        return bs(arr, key, low, mid - 1);
    }
    else
    {
        return mid;
    }
}
int main()
{
    vector<int> arr{1, 4, 7, 8, 11, 22, 45};
    int key = 6;
    int low = 0;
    int high = arr.size() - 1;
    cout << bs(arr, key, low, high);
}