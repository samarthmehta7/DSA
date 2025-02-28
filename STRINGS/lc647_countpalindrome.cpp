#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int checkPalindrome(string s, int i, int j)
{
    int count = 0;
    while (i <= j && i >= 0 && j < s.length())
    {
        if (s[i] == s[j])
        {
            i--;
            j++;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
int main()
{
    string s = "abcbbcscabacacbaccabbacacacaca";
    int i = 0;
    int countpalindromes = 0;
    while (i < s.length())
    {
        // odd check
        countpalindromes += checkPalindrome(s, i, i);
        // even check
        countpalindromes += checkPalindrome(s, i, i + 1);
        i++;
    }
    cout << countpalindromes;
}