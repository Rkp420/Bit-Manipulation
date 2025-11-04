#include <iostream>
using namespace std;
int findUnique(int *arr, int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = (res ^ arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 4, 2, 4, 6, 3};
    cout << findUnique(arr, 7) << endl;
    return 0;
}