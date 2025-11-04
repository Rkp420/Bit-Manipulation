#include <iostream>
using namespace std;

int Mod = 1e9 + 7;

int largestPowerOfTwo(int A)
{
    int x = 0;
    while ((1 << x) <= A)
        x++;
    return x - 1;
}

int solve(int A)
{
    if (A == 0)
        return 0;

    int x = largestPowerOfTwo(A);

    long long bitTill = (1LL << (x - 1)) * x;

    long long msb = A - (1 << x) + 1;

    int rest = A - (1 << x);

    long long ans = (bitTill % Mod + msb % Mod + solve(rest) % Mod) % Mod;

    return ans;
}

int main()
{
    return 0;
}