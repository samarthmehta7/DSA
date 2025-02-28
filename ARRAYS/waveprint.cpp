#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    bool print = 1;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (print)
            {
                cout << matrix[j][i] << " ";
            }
            else

            {
                cout << matrix[matrix.size() - 1 - j][i] << " ";
            }
            print = !print;
        }
    }
}