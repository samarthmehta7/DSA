#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "leetcode";
    string vowels = "AEIOUaeiou";
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (vowels.find(s[i]) != string::npos && vowels.find(s[j]) != string::npos)

        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        if (vowels.find(s[i]) == string::npos)
        {
            i++;
        }
        if (vowels.find(s[j]) == string::npos)
        {
            j--;
        }
    }
    cout << s;
}