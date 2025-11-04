// https://leetcode.com/problems/total-hamming-distance/

#include <iostream>
using namespace std;

// BruteForce

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0;

        for (int i = 0; i < 32; i++)
        {
            if ((x >> i & 1) ^ (y >> i & 1))
                count++;
        }

        return count;
    }

    int totalHammingDistance(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                ans += hammingDistance(nums[i], nums[j]);
            }
        }

        return ans;
    }
};

// Optimised

class Solution
{
public:
    int totalHammingDistance(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int countSetBit = 0;
            for (auto num : nums)
            {
                if ((num >> i) & 1)
                {
                    countSetBit++;
                }
            }

            int countUnsetBit = nums.size() - countSetBit;
            ans += (countSetBit * countUnsetBit);
        }

        return ans;
    }
};

int main()
{
    return 0;
}