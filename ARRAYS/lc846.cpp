#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> hand{1, 2, 3, 6, 2, 3, 4, 7, 8};
    int groupSize = 3;
    if (hand.size() % groupSize != 0)
    {
        return false;
    }
    map<int, int> mpp;
    for (int i = 0; i < hand.size(); i++)
    {
        mpp[hand[i]]++;
    }
    while (!mpp.empty())
    {
        int curr = mpp.begin()->first;
        for (int i = 0; i < groupSize; i++)
        {
            if (mpp[curr + i] == 0)
            {
                return false;
            }
            mpp[curr + i]--;
            if (mpp[curr + 1] < 1)
            {
                mpp.erase(curr + i);
            }
        }
    }

    return true;
}