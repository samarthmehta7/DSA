#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void reverseString(string &s, int i)
{
    if (i == s.length() / 2)
    {
        return;
    }
    swap(s[i], s[s.length() - 1 - i]);
    return reverseString(s, i + 1);
}
int main()
{
    string s = "NITINN";
    reverseString(s, 0);
    cout << s;
}
