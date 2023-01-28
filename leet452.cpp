#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  static bool bl(vector<int> &a, vector<int> &b)
  {
    return a[1]<b[1];
  }
  
  int findMinArrowShots(vector<vector<int>>& points) {
    int shoots = 0;
    
    if (!points.size()) return 0;
    if (points.size() == 1) return 1;
    
    sort(points.begin(), points.end(), bl);
    
    for (int i = 0, j = i + 1; i < points.size(); ++j)
    {
      if (j >= points.size())
      {
        ++shoots;
        break;
      }
      
      if (points[j][0] > points[i][1])
      {
        ++shoots;
        i = j;
      }
    }
    
    return shoots;
  }
};

int main ()
{
  Solution s;
  vector<vector<int>> vec = {
    {5, 6},
    {1, 2},
    {3, 4},
    {7, 8},
  };

  cout << s.findMinArrowShots(vec) << endl;
};