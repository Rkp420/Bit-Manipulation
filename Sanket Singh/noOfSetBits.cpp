#include <iostream>
using namespace std;
int count_set_bits(int n){
    int count = 0;
    while(n){
        count++;
        n = (n & (n - 1));
    }
    return count;
}
int main()
{
    // Our Method Using Brian Kerninghan's algo
    cout<<count_set_bits(25) << '\n';

    // Built In library in cpp
    cout<< __builtin_popcount(25) << endl;
    return 0;
}