#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool bs(vector<vector<int>> matrix, int target)
{
    int low = 0;
    int m = matrix.size();
    int n = matrix[0].size();
    int high = n * m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (matrix[mid / n][mid % n] == target)
        {
            return true;
        }
        else if (matrix[mid / n][mid % n] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix;
    int target = 15;
    return bs(matrix, target);
}