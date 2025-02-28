#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string target = "kamina";
    // cout << str.substr(0, 3);
    // cout << str.find(target);
    // important functions
    if (str.find(target) == string::npos)
    {
        cout << "NOT FOUND";
    }
    else
    {

        cout << "FOUND AT ==> " << str.find(target) << endl;
        str.erase(str.find(target), target.length());
        cout << str;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'M')
        {
            cout << str.substr(0, i);
            cout << str.substr(i + 1);
        }
    }
}
