#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool checkprefix(vector<string> &strs, char ch, int j)
{
    int index1 = 1;
    while (index1 < strs.size())
    {

        if (strs[index1][j] != ch)
        {
            return false;
        }
        index1++;
    }
    return true;
}
int main()
{
    vector<string> strs{"cir", "car"};
    string temp = "";

    int index = 0;
    int mini = INT_MAX;
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].length() < mini)
        {
            index = i;
            mini = strs[i].length();
        }
    }
    swap(strs[0], strs[index]);
    for (int i = 0; i < strs[0].length(); i++)
    {
        if (checkprefix(strs, strs[0][i], i))
        {
            temp.push_back(strs[0][i]);
        }
        else
        {
            break;
        }
    }
    cout << temp;
}