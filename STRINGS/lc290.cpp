#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "dog cat cat dog";
    int index = 0;
    map<string, int> mpp;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) == 32)
        {
            mpp[s.substr(index, i)]++;
            index = i;
        }
    }
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
}