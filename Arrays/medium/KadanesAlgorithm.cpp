/*
Problem: Max subarray using Kadane's Algorithm

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int maxsubarray(vector<int>& nums){
    int maxsum=nums[0];
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}