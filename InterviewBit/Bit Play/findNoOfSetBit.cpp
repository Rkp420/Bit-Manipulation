#include <iostream>
using namespace std;

int numSetBits(unsigned int A)
{
    int ans = 0;
    while (A)
    {
        ans++;
        A = A & (A - 1);
    }

    return ans;
}

int main()
{
    return 0;
}