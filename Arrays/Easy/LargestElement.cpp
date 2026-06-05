/*
Problem: Largest Element in an Array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& nums) {
        int max=nums[0];

        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        return max;
}