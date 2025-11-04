// https://leetcode.com/problems/hamming-distance/

#include <iostream>
using namespace std;

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
};

int main()
{
    return 0;
}