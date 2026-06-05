/*
Problem: Check if Array is Sorted

Best Case Time Complexity: O(1)
Worst Case Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& nums){
            for(int i=1;i<nums.size();i++){
                if(nums[i]<nums[i-1]){
                    return false;
                }
            }
            return true;
		}