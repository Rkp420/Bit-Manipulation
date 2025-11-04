#include <iostream>
using namespace std;
pair<int, int> findUnique(int *arr, int n)
{
    pair<int, int> ans;

    // Step 1 : Finding Xor Of all
    int xorOfAll = 0;
    for (int i = 0; i < n; i++)
        xorOfAll = (xorOfAll ^ arr[i]);

    // Step 2: Find position of the rightmost set bit in xorOfAll
    int k = 0;
    int temp = xorOfAll;
    while (!(temp & 1))
    { // Find the first bit that is set (0-based index)
        k++;
        temp >>= 1;
    }
    cout << "The k-th position (0-based): " << k << endl;

    // Step 3: XOR elements where the k-th bit is set
    int currXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << k)) // Check if the k-th bit is set
            currXor ^= arr[i];
    }

    // Step 4 : Xor with Resultant Xor
    int firstNum = (currXor ^ xorOfAll);
    int secondNum = (xorOfAll ^ firstNum);
    return {firstNum, secondNum};
}
int main()
{
    int arr[] = {2, 3, 4, 2, 4, 6, 3, 7, 6 , 7, 9, 1};
    pair<int, int> temp = findUnique(arr, 12);
    cout << temp.first << endl;
    cout << temp.second << endl;
    return 0;
}