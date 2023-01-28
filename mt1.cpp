#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> runSum;
        for (int i = 0; i < nums.size(); ++i)
        {
            int locSum = 0;
            for (int j = 0; j <= i; ++j)
            {
                locSum += nums[j];
            }
            runSum.push_back(locSum);
        }
        return runSum;
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 4};
    
    std::vector<int> runSum = sol.runningSum(nums);
    for (int i = 0; i < 4; ++i){
         std::cout << runSum[i] << std::endl;
    }

    return 0;
}

