#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 4, 5, 5, 6, 7};
    vector<int> brr{1, 1, 7, 8, 8, 8, 11, 12, 12, 14};
    set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        st.insert(brr[i]);
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
    
}