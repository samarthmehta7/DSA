#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void removeOccurences(string &s, string &part)
{
    if (s.find(part) == string::npos)
    {
        return;
    }
    s.erase(s.find(part), part.length());
    removeOccurences(s, part);
}
int main()
{
    string s = "abcdvbxybdbxyxyxyxyxxy";
    string part = "xy";
    removeOccurences(s, part);
    cout << s;
}