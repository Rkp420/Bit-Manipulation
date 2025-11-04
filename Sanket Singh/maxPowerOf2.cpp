#include <iostream>
using namespace std;

// We need to find just smaller no that is pow of 2 
// e.g : for 24 ==> ans : 16 
// There are Two Solutions : 
// 1. by setting all the bits off
// 2. by setting all the bits on

// 1.
int max_power_two(int n){ 
    int prev = 0;
    while(n){
        prev = n; // This is storing the prev value before value becomes zero
        n = (n & (n - 1));
    }
    return prev;
}

// 2. 
int max_power_two2(int n){
    // Step 1 : on all the off Bits
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    
    // Step 2 : Some calculations 
    return ((n + 1) >> 1); // divide by two 
}

// in Case of Just greater
int max_power_two_greater(int n)
{
    int prev = 0;
    while (n)
    {
        prev = n; // This is storing the prev value before value becomes zero
        n = (n & (n - 1));
    }
    return prev << 1;
}

int max_power_two_greater2(int n){
    // Step 1 : on all the off Bits
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);

    // Step 2 : Some calculations
    return (n + 1); // divide by two
}

int main()
{
    cout << max_power_two(24) << endl;
    cout << max_power_two2(24) << endl;
    cout << max_power_two_greater(24) << endl;
    cout << max_power_two_greater2(24) << endl;
    return 0;
}