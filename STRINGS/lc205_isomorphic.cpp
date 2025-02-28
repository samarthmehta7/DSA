#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "egg";
    string t = "add";
    map<char, char> mpp1;
    map<char, char> mpp2;
    for (int i = 0; i < s.length(); i++)
    {
        if (mpp1.find(s[i]) == mpp1.end() && mpp2.find(t[i]) == mpp2.end())
        {
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        if (s[i] != mpp2[t[i]])
        {
            cout << "false" << endl;
        }
    }

    for (auto it : mpp1)
    {
        cout << it.first << "-->" << it.second;
        cout << endl;
    }
}