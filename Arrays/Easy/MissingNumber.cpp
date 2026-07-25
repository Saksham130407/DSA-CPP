/*
Problem: Find missing number

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums){
    int n=nums.size();
    int sum = n*(n+1)/2;
    int tsum=0;
    for(int i=0;i<n;i++){
        tsum+=nums[i];
    }
    return sum-tsum;
}