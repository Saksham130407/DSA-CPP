/*
Problem: Remove duplicates in sorted array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int RemoveDuplicates(vector<int>& arr){
    int i=0;
    for(int j=0;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}