#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "anaygram";
    string t = "nagaram";
    vector<int> hash(256);
    for (int i = 0; i < s.length(); i++)
    {
        hash[int(s[i])]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        hash[int(t[i])]--;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] != 0)
        {
            cout << "false";
            break;
        }
    }
    cout << "true";
    // map<char, int> mpp1;
    // map<char, int> mpp2;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     mpp1[s[i]]++;
    // }
    // for (int i = 0; i < t.length(); i++)
    // {
    //     mpp2[t[i]]++;
    // }
    // for (int i = 0; i < t.length(); i++)
    // {
    //     if (mpp2[t[i]] != mpp1[t[i]])
    //     {
    //         cout << "false";
    //     }
    // }
    // cout << "true";
}