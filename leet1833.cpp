#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
  int maxIceCream(vector<int> &costs, int coins)
  {
    if (!costs.size())
      return 0;

    int sum = 0;
    int count = 0;

    sort(costs.begin(), costs.end());

    while (true)
    {
      sum += costs[count++];
      if (sum > coins)
        return --count;
      if (count >= costs.size())
        return count;
    }
  }
};

int main()
{
  vector<int> costs{1, 6, 3, 1, 2, 5};
  int coins = 20;

  Solution s;

  cout << s.maxIceCream(costs, coins) << endl;
}