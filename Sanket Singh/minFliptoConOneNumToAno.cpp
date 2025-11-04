#include <iostream>
using namespace std;

int noOfFlips_to_convert_oneNum_to_another(int x , int y){
    // Step 1 : Xor the Num to set all bits to 1 for the diff rigion
    int temp = (x ^ y) ;
    return __builtin_popcount(temp);
}

int main()
{
    cout << noOfFlips_to_convert_oneNum_to_another( 5 , 8) << endl;
    return 0;
}