/*
Problem: Two sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<long long, int> mp;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int need = target-nums[i];
        if (mp.find(need) != mp.end()){
            return {mp[need],i};
         }

          mp[nums[i]]=i;
     }
    return {};
}