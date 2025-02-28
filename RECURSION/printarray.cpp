#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void printarray(vector<int> &arr, int i)
{
    if (i == arr.size())
    {
        return;
    }
    cout << arr[i];
    printarray(arr, i + 1);
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    printarray(arr, 0);
}