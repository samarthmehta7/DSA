#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int l = strlen(ch);
    for (int i = 0; i < l; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    // else if (ch[i] >= 'A' && ch[i] <= 'Z')

    // {
    //     ch[i] = ch[i] - 'A' + 'a';
    // }
    int i = 0;
    int j = l - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
    cout<<ch;
    
}