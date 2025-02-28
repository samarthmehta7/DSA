#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<char> chars{'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    int index = 0;
    int i = 0;
    while (i < chars.size())
    {
        int count = 0;
        char currentchar = chars[i];
        while (i < chars.size() && chars[i] == currentchar)
        {
            count++;
            i++;
        }

        chars[index] = currentchar;
        index++;

        if (count > 1)
        {
            string countstr = to_string(count);

            for (auto it : countstr)
            {
                chars[index] = it;
                index++;
            }
        }
    }

    for (auto it : chars)
    {
        cout << it << " ";
    }
}