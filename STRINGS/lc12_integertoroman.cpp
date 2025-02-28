#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> values{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symb{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int num = 3749;
    string ans = "";
    for (int i = 0; i < symb.size(); i++)
    {
        int times = num / values[i];
        while (times > 0)
        {
            ans += symb[i];
            times--;
        }
        num = num % values[i];
    }
    cout << ans;
}