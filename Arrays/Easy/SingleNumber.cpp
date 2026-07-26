/*
Problem: find single number in Array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int SingleNumber(vector<int>& nums){
    unordered_map<int,int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (int num : nums) {
            if (freq[num] == 1) {
                return num;
            }
        }

        return -1;
    }
