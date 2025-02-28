#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool checkPalindrome(string &s, int i)
{
    if (i == s.length() / 2)
    {
        return true;
    }
    if (s[i] != s[s.length() - 1 - i])
    {
        return false;
    }
    return checkPalindrome(s, i + 1);
}
int main()
{
    string s = "nitin";
    if (checkPalindrome(s, 0))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}