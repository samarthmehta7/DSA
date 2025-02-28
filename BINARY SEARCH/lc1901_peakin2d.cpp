#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findmax(vector<vector<int>> &mat, int col)
{
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i < mat.size(); i++)
    {
        if (mat[i][col] > maxi)
        {
            maxi = mat[i][col];
            index = i;
        }
    }
    return index;
}
vector<int> bs(vector<vector<int>> &mat)
{
    int low = 0;
    int high = mat[0].size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = findmax(mat, mid);
        int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
        int right = mid + 1 < mat[row].size() ? mat[row][mid + 1] : -1;
        if (mat[row][mid] > left && mat[row][mid] > right)
        {
            return {row, mid};
        }
        else if (mat[row][mid] < left)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<int> mat;
}