#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void addStrings(string &num1, string &num2, string &ans, int i, int j, int carry)

{
    if (i < 0 && j < 0)
    {
        if (carry != 0)
        {
            ans.push_back(carry + '0');
        }
        return;
    }
    int n1 = (i >= 0) ? num1[i] - '0' : 0;
    int n2 = (j >= 0) ? num2[j] - '0' : 0;
    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;
    ans.push_back(digit + '0');
    addStrings(num1, num2, ans, i - 1, j - 1, carry);
}
int main()
{
    string num1 = "1";
    string num2 = "99";
    string ans = "";
    addStrings(num1, num2, ans, num1.length() - 1, num2.length() - 1, 0);
    reverse(ans.begin(), ans.end());
    cout << ans;
}