#include <iostream>
using namespace std;

int makeAllBitsSet(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);

    return n;
}
int flipAllBits(int n){
    // Xor with 1 set all bits off if 1 and on if 0;
    
    int noWithAllSetBits = makeAllBitsSet(n); 

    return (noWithAllSetBits ^ n);
}

int main()
{
    cout << flipAllBits(5) << endl;
    return 0;
}