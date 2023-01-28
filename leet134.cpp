#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> index;
        
        for (int i = 0; i < gas.size(); ++i)
        {
            index.push_back(i);
        }

        
        
        for (int i = 0; i < gas.size() - 1; ++i)
        {
            for (int j = i + 1; j < gas.size(); ++j)
            {
                if(gas[j] - cost[j] > gas[i] - cost[i] || (gas[j] - cost[j] == gas[i] - cost[i] && gas[j] < gas[i]))
                {
                    int gasTmp = gas[i];
                    gas[i] = gas[j];
                    gas[j] = gasTmp;
                    
                    int costTmp = cost[i];
                    cost[i] = cost[j];
                    cost[j] = costTmp;
                    
                    int indexTmp = index[i];
                    index[i] = index[j];
                    index[j] = indexTmp;
                }

                cout << "------------------------" <<endl;
                for (int i = 0; i < gas.size(); ++i)
                {
                  cout << gas[i] << '\t';
                }
                cout << "\n-------------------------  " << gas[i] - cost[i] << endl;
            }

                // cout << "------------------------" <<endl;
                // for (int i = 0; i < gas.size(); ++i)
                // {
                //   cout << gas[i] << '\t';
                // }
                // cout << "\n-------------------------" << endl;
        }

        // for (int i = 0; i < index.size(); ++i)
        // {
        //   cout << index[i] << endl;
        // }
        
        int sum = 0;
        for (int i = 0; i < gas.size(); ++i)
        {
            sum += gas[i];
            sum -= cost[i];
        }
        
        if (sum >= 0) return index[0];
        return -1;
    }
};

int main()
{
  Solution s;

  vector<int> gas = {1,2,3,4,5};
  vector<int> cost = {3,4,5,1,2};

  cout << s.canCompleteCircuit(gas, cost) << endl;

  return 0;
}