/*
Problem: Find max consecutive Ones in binary array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums){
    int count=0;
    int maxcount=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
            maxcount=max(count,maxcount);
        }
        else{
            count=0;
        }
        return maxcount;
    }
}