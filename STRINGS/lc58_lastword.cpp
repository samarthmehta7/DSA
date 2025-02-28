#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    // cout << "The ASCII value of space is: " << int(' ') << endl;
    string s = "b a ";
    int count = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (int(s[i]) != 32)
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                break;
            }
        }
    }
    cout << count;
}