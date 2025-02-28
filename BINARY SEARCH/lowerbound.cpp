#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int lowerbound(vector<int> arr, int key)
{
    int low = 0;
    int index = -1;
    int index2 = -1;
    int high = arr.size() - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] >= key)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }

    return index;
}
int main()
{
    vector<int> arr{1, 2, 3, 5, 6, 7, 8, 9};
    int k = 0;
    cout << lowerbound(arr, k) << endl;
    cout << lower_bound(arr.begin(), arr.end(), k) - arr.begin();
}