/*
Problem:Rearrange Array elements ny sign

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> RearrangeElements(vector<int>& nums){
    vector<int> NewArr(nums.size());
    int positive=0,negative=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            NewArr[positive]=nums[i];
            positive+=2;
        }
        else{
            NewArr[negative]=nums[i];
            negative+=2;
        }
    }
    return NewArr;
}