#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        int mul = 1;

        while(x / mul > 1)
        {
            mul *= 10;
        }

        if (x % 10 == 0) return false;

        mul /= 10;

        while (mul > 10)
        {
            if (x / mul != x % 10) return false;

            x = ((x % mul) - x % 10) / 10;

            mul /= 10;
        }

        return true;
    }
};

int main()
{
    Solution s;
    std::cout << s.isPalindrome(123) << std::endl;

    return 0;
}

