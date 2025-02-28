#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void findkey(string &s, char &key, int i, vector<int> &ans, int &count)
{

    if (i == s.length())
    {
        return;
    }
    if (s[i] == key)
    {
        // cout << "found at " << i << endl;
        ans.push_back(i);
        count++;
    }
    return findkey(s, key, i + 1, ans, count);
}
int main()
{
    string s = "helloworld";
    char key = 'l';
    vector<int> ans;
    int count = 0;
    findkey(s, key, 0, ans, count);
    for (auto &it : ans)
    {
        cout << it << endl;
    }
    cout << "count is -->" << count;
}