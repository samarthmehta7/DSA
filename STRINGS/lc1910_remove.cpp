#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "axxxxyyyyb";
    string part = "xy";
    while (s.find(part) != string::npos)
    {
        s.erase(s.find(part), part.length());
    }
    cout << s;
}