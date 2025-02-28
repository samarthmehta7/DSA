#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int functionNCR(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i);
        ans = ans / (i + 1);
    }
    return ans;
}
int main()
{
    int numRows = 5;
    vector<vector<int>> matrix(numRows);
    for (int i = 1; i <= numRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            matrix[i - 1].push_back(functionNCR(i - 1, j - 1));
            // cout << factorial(i - 1) / (factorial(j - 1) * factorial(i - j));
        }
        cout << endl;
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
