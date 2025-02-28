#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int ans = -1;
int lastOccurence(string &s, char &ch, int i)
{
    if (i == s.length())
    {
        return ans;
    }
    if (s[i] == ch)
    {
        ans = i;
    }
    return lastOccurence(s, ch, i + 1);
}
int main()
{
    string s = "abcdcddegdgdjs";
    char ch = 'z';
    cout << lastOccurence(s, ch, 0);
}