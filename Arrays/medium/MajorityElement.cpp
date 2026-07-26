/*
Problem: Majority Element-I

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int>& nums) {
    map<int,int>mpp;

    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (nums.size())/2){
            return it.first;
        }
    }
    return -1;
}