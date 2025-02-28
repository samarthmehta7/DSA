#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<string> timePoints{"00:00", "09:59"};
    vector<int> ans;
    for (int i = 0; i < timePoints.size(); i++)
    {
        int hours = stoi(timePoints[i].substr(0, 2));
        int minutes = stoi(timePoints[i].substr(3, 2));
        int totalminutes = hours * 60 + minutes;
        ans.push_back(totalminutes);
    }

    sort(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    int i = 0;
    int j = 1;
    int mini = INT_MAX;
    int diff = 0;
    while (i < j && j < ans.size())
    {
        diff = ans[j] - ans[i];
        mini = min(diff, mini);
        i++;
        j++;
    }
    ans[0] += 1440;
    diff = ans[0] - ans[ans.size() - 1];
    mini = min(diff, mini);

    cout << mini;
}