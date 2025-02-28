#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s = "Test1ng-Leet=code-Q!";
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (isalpha(s[i]) && isalpha(s[j]))
        {

            swap(s[i], s[j]);
            i++;
            j--;
        }
        if (!isalpha(s[i]))
        {
            i++;
        }
        if (!isalpha(s[j]))
        {
            j--;
        }
        }
    cout << s;
}