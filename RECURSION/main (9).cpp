#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &coins, int amount)
{
  // base case
  if (amount == 0)
  {
    return 0;
  }
  if (amount < 0)
  {
    return INT_MAX;
  }

  // let's solve 1 case
  int mini = INT_MAX;
  for (int i = 0; i < coins.size(); i++)
  {
    int ans = solve(coins, amount - coins[i]);
    if (ans != INT_MAX)
      mini = min(mini, ans + 1);
  }

  return mini;
}

int main()
{
  vector<int> coins{1, 2, 3};
  int amount = 5;

  int ans = solve(coins, amount);
  cout << "Answer is: " << ans << endl;
  return 0;
}