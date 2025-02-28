#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};

    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] < 0)
        {
            i++;
        }
        else if (arr[j] > 0)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
