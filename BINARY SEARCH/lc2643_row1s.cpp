#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> mat;
    int count = 0;
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i < mat.size(); i++)
    {
        count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxi)
        {
            maxi = count;
            index = i;
        }
    }
}