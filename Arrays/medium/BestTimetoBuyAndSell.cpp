/*
Problem: Best time to buy and sell stocks

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int stockbuysell(vector<int>& nums){
    int mini=nums[0];
    int profit=0,maxprofit=0;
    for(int i=0;i<nums.size();i++){
        mini=min(nums[i],mini);
        profit=nums[i]-mini;
        maxprofit=max(maxprofit,profit);
    }
    return maxprofit;
}