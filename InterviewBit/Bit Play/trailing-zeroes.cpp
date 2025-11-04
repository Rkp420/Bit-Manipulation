#include <iostream>
using namespace std;

int solve(int A)
{
    if (A == 0)
        return 32;
    int ans = 0;
    while (A)
    {
        if ((A & 1) != 0)
            break;
        ans++;
        A = A >> 1;
    }

    return ans;
}

int main()
{
    return 0;
}