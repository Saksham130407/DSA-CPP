/*
Problem: Left Rotate Array by One 

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByOne(vector<int>& nums) {
        int n=nums.size();
        int temp = nums[0];
        for(int i =1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }