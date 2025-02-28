#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "coaching";
    string t = "coding";
    int i = 0;
    int j = 0;
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            j++;
        }
        i++;
    }
    return t.length() - j;
    // string ans = "";
    // ans = s + t.substr(j);
    // cout << ans;
}