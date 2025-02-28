#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums{3, 30, 34, 5, 9};
    auto myComparator = [](int &a, int &b)
    {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return s1 + s2 > s2 + s1;
    };
    sort(nums.begin(), nums.end(), myComparator);
    string result = "";
    for (auto it : nums)
    {
        result += to_string(it);
    }
    
    cout << result;
}