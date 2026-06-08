/*
Problem: Left Rotate Array by K

Time Complexity: O(n)
Space Complexity: O(d)
*/

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
        int n=nums.size();
        int temp[100];
        k= k % n;
        for(int i=0;i<k;i++){
            temp[i]=nums[i];
        }
        for(int i=k;i<n;i++){
            nums[i-k]=nums[i];
        }
        for(int i=n-k;i<n;i++){
            nums[i]=temp[i-(n-k)];
        }

    }