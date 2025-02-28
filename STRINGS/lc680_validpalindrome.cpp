#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool checkPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s = "NEAMAN";
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1))
            {
                cout << "TRUE";
                break;
            }
            else
            {
                cout << "false";
                break;
            }
        }
        i++;
        j--;
    }
    cout << "TRUE" << endl;
    
    int start = (5 > 1) ? 7 : 3;
    cout << start;
}