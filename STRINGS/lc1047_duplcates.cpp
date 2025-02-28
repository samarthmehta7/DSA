#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int main()
{
    string s = "azxxzy";
    string temp = "";
    int i = 0;
    while (i < s.length())
    {
        if (temp.length() >= 1 && temp[temp.length() - 1] == s[i])

        {
            temp.pop_back();
        }
        else
        {
            temp.push_back(s[i]);
        }
        i++;
    }
    cout << temp;
}