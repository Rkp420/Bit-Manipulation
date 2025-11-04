#include <iostream>
using namespace std;

unsigned int reverse(unsigned int A)
{
    unsigned rev = 0;
    for (int i = 0; i < 32; i++)
    {
        rev <<= 1;
        rev |= (A & 1);
        A >>= 1;
    }

    return rev;
}

unsigned int reverse(unsigned int A)
{
    unsigned rev = 0;
    for (int i = 0; i < 32; i++)
    {
        rev <<= 1;
        rev |= (A & 1);
        A >>= 1;
    }

    return rev;
}

int main()
{
    return 0;
}