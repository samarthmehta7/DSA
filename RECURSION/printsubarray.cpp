#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void printSubarray(vector<int> &arr, int i, int j)
{
    if (i == arr.size())
    {
        return;
    }
    for (int start = i; start <= j; start++)
    {
        cout << arr[start];
    }
    cout << endl;
    if (j == arr.size() - 1)
    {
        printSubarray(arr, i + 1, i + 1);
    }
    else
    {
        printSubarray(arr, i, j + 1);
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    printSubarray(arr, 0, 0);
}