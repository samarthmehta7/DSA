#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "A man, a plan, a canal: Panama";
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (isalnum(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    cout << temp;
    int i = 0;
    int j = temp.length() - 1;
    while (i <= j)
    {
        if (temp[i] != temp[j])
        {
            cout << "FALSE";
            break;
        }
        i++;
        j--;
    }
    cout << "true";
}