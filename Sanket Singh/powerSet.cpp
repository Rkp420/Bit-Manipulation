#include <iostream>
using namespace std;
vector<vector<int>> totalSubsets(vector<int> &nums){
    vector<vector<int>> ans;
    int n = nums.size();
    int ts = (1 << n) ;
    for(int i = 0; i < ts; i++){
        vector<int> temp;
        int currts = i;
        for(int j = 0 ; j < n ; j++){
            if(1 & (currts >> j)){
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

void printSubsets(vector<vector<int>> &subset){
    for(int i = 0; i < subset.size(); i++){
        for(int j = 0 ; j < subset[i].size(); j++){
            cout<< subset[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    vector<vector<int>> totalSubSetsOftemp = totalSubsets(temp);
    printSubsets(totalSubSetsOftemp);
    return 0;
}