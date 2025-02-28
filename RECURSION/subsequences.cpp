#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void printsubsequences(string &s, int i, string ans, vector<string> &finalAns)
{
    if (i == s.length())
    {
        // cout << ans << endl;
        finalAns.push_back(ans);
        return;
    }
    // include case
    ans += s[i];
    printsubsequences(s, i + 1, ans, finalAns);
    ans.pop_back();
    // exclude case
    printsubsequences(s, i + 1, ans, finalAns);
}
int main()
{
    string s = "abcdefg";
    string ans = "";
    vector<string> finalAns;
    printsubsequences(s, 0, ans, finalAns);
    for (auto it : finalAns)
    {
        cout << it << endl;
    }
    cout << finalAns.size();
}