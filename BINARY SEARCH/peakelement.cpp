#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int peakelement(vector<int> arr)
{
    int st = 0;
    int ans = -1;

    int end = arr.size() - 1;
    int mid = st + (end - st) / 2;
    while (st < end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
            ans = arr[mid];
        }
        else if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans;
}

int main()

{
    vector<int> arr{0, 10, 5, 2};
    cout << peakelement(arr);
}