#include <iostream>
using namespace std;

int divide(int A, int B)
{

    if (A == INT_MIN && B == -1)
        return INT_MAX;

    int sign = ((A < 0) ^ (B < 0)) ? -1 : 1;

    long long dvd = abs((long long)A);
    long long dvs = abs((long long)B);

    long long result = 0;

    while (dvd >= dvs)
    {
        long long temp = dvs;
        long long multiple = 1;

        while ((temp << 1) <= dvd)
        {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        result += multiple;
    }

    result = sign * result;

    if (result > INT_MAX)
        return INT_MAX;
    if (result < INT_MIN)
        return INT_MIN;

    return (int)result;
}

int main()
{
    return 0;
}