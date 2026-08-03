/*
Problem: Leaders in an array

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> leaders(vector<int>& nums) {

      vector<int> ans;
      int n=nums.size();
      int maxi=INT_MIN;

      for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi=max(nums[i],maxi);
      }
      reverse(ans.begin(),ans.end());
      return ans;
}