#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    // Code Here
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (largest < arr[i])
        {
            slargest = largest;
            largest = arr[i];
        }

        if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
// int getSecondLargest(vector<int> &arr)  better but not optimal
// {
//     // Code Here
//     int largest = -1;
//     int slargest = -1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (largest < arr[i])
//         {
//             largest = arr[i];
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] && arr[i] != largest)
//         {
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }
int main()
{
    vector<int> arr{1, 2, 95, 6, 22, 33, 44, 55, 52, 67};
    cout << getSecondLargest(arr);
}