#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void findmax(vector<int> &arr, int &maxi, int &mini, int i)

{
    if (i == arr.size())
    {
        return;
    }
    maxi = max(arr[i], maxi);
    mini = min(arr[i], mini);
    return findmax(arr, maxi, mini, i + 1);
}
int main()
{
    vector<int> arr{12, -6, 7, 22, 21, 55, 3};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    findmax(arr, maxi, mini, 0);
    cout << maxi << "-->" << mini;
}