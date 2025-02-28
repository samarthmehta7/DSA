#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "hello   world   ";
    // cout << s.substr(10, 14);
    int index = s.length() - 1;
    // cout << index << endl;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (int(s[i]) == 32)
        {
            index--;
        }
        else
        {
            break;
        }
        // cout << index << endl;
    }

    // cout << index << endl;
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (int(s[i]) == 32 && i > 0)
        {
            string word = s.substr(i + 1, index - i);
            cout << word << endl;
            ans += word;
            ans += "     ";
            cout << ans << endl;
            index = i - 1;
        }
        else if (i == 0)
        {
            string word = s.substr(i, index + 1 - i);
            ans += word;
        }
    }
    // cout << ans << endl;
    for (int i = 0; i < ans.length(); i++)
    {
        if (i < ans.length() - 1 && int(ans[i]) == 32 && int(ans[i + 1]) == 32)
        {
            ans.erase(i, 1);
            i--;
        }
    }
    cout << ans;
}