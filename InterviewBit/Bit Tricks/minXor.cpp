
#include <iostream>
using namespace std;

int findMinXor(vector<int> &A)
{
    sort(A.begin(), A.end());
    int minXor = INT_MAX;

    for (int i = 0; i < A.size() - 1; i++)
    {
        int val = A[i] ^ A[i + 1];
        minXor = min(minXor, val);
    }

    return minXor;
}

int main()
{
    return 0;
}