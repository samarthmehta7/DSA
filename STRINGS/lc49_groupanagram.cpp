#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
string generate(string word)
{
    vector<int> hash(26);
    string finalword = "";
    int index = 0;
    while (index < word.length())
    {
        hash[word[index] - 'a']++;
        index++;
    }
    int j = 0;

    while (j < hash.size())
    {
        if (hash[j] != 0)
        {
            finalword += string(hash[j], j + 'a');
        }
        j++;
    }
    return finalword;
}
int main()
{
    vector<string> strs{"ddddddddddg", "dgggggggggg"};
    map<string, vector<string>> mpp;
    vector<vector<string>> result;
    for (int i = 0; i < strs.size(); i++)
    {

        string ans = generate(strs[i]);
        mpp[ans].push_back(strs[i]);
        cout << ans << endl;
    }
    for (auto it : mpp)
    {
        result.push_back(it.second);
    }
    // string temp;
    // for (int i = 0; i < strs.size(); i++)
    // {
    //     temp = strs[i];
    //     sort(temp.begin(), temp.end());
    //     mpp[temp].push_back(strs[i]);
    // }

    // for (auto it : mpp)
    // {
    //     ans.push_back(it.second);
    // }
    // return ans;
}