#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
string checkPalindrome(string s, int i, int j)
{
    string ans = "";
    int start = 0;
    int end = 0;
    while (i <= j && i >= 0 && j < s.length())
    {
        if (s[i] == s[j])
        {
            ans = s.substr(i, j - i + 1);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main()
{
    string s = "babad";
    int i = 0;
    string longest = "";
    while (i < s.length())
    {
        // odd check
        if (longest.length() < checkPalindrome(s, i, i).length())
        {
            longest = checkPalindrome(s, i, i);
        }

        // even check
        if (longest.length() < checkPalindrome(s, i, i + 1).length())
        {
            longest = checkPalindrome(s, i, i + 1);
        }
        i++;
    }
    cout << longest;
}