#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &coins, int amount, int output)
{
    // base case
    if (output == amount)
    {
        return 0;
    }
    if (output > amount)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(coins, amount, output + coins[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main()
{
    vector<int> coins{1};
    int amount = 11;

    int ans = solve(coins, amount, 0);
    cout << "Answer is: " << ans << endl;
    return 0;
}