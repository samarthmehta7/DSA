#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "wfndrin";
    vector<int> hash(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++; // to map lowercase letters to index of hash[26]
    }
    int max_freq = INT_MIN;
    char maxchar = 0;
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > max_freq)
        {
            max_freq = hash[i];
            maxchar = i + 'a';
        }
    }
    int index = 0;
    while (max_freq > 0 && index < s.length())
    {
        s[index] = maxchar;
        index += 2;
        max_freq--;
    }
    if (max_freq != 0)
    {
        cout << "false";
    }
    hash[maxchar - 'a'] = 0;
    cout << s << endl;
    for (auto it : hash)
    {
        cout << it << " ";
    }
    cout << endl;

    for (int i = 0; i < hash.size(); i++)
    {
        while (hash[i] != 0)
        {
            index = index >= s.length() ? 1 : index;
            s[index] = i + 'a';
            index += 2;
            hash[i]--;
        }
    }
    cout << s;
}