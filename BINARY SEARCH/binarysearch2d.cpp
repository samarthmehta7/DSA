#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> binarysearch2d(vector<vector<int>> nums, int key)
{
    int st = 0;
    int rows = nums.size();
    int cols = nums[0].size();
    int end = rows * cols - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        if (nums[rowIndex][colIndex] == key)
        {
            return {rowIndex, colIndex};
        }
        else if (nums[rowIndex][colIndex] > key)
        {
            end = mid - 1;
        }
        else if (nums[rowIndex][colIndex] < key)
        {
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }
    int rowIndex = mid / cols;
    int colIndex = mid % cols;

    return {-1, -1};
}
int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 1;
    vector<int> ans;
    ans = binarysearch2d(matrix, target);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}