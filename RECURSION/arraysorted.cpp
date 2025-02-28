#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool checkarrayissorted(vector<int> &arr, int i)
{
    if (i == arr.size() - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])

    {
        return false;
    }
    return checkarrayissorted(arr, i + 1);
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 7, 8, 9, 88, 222};
    if (checkarrayissorted(arr, 0))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}