#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{-1, 4, -5, 11, -3, 4, -1, 5, 0, 11, 3};
    vector<int> hash(2001, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hash[1000 + arr[i]]++;
    }
    sort(hash.begin(), hash.end());
    for (int i = 0; i < hash.size() - 1; i++)
    {
        if (hash[i] != 0 && hash[i] == hash[i + 1])
        {
            cout << "false";
        }
    }

    // map<int, int> mpp;
    // set<int> st;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // for (auto it : mpp)
    // {
    //     cout << it.first << "," << it.second << endl;
    // }
    // for (auto it : mpp)
    // {
    //     if (st.find(it.second) == st.end())
    //     {
    //         st.insert(it.second);
    //     }
    //     else
    //     {
    //         cout << "FALSE";
    //         break;
    //     }
    // }
}