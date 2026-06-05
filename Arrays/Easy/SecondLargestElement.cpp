#include <iostream>
#include <vector>
using namespace std;

int secondLargestElement(vector<int>& nums) {
        int lar=nums[0];
        int slar=-1;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>lar){
                slar=lar;
                lar=nums[i];
            }
            else if(nums[i] < lar && nums[i] > slar) {

                slar = nums[i];
            }
        }
        return slar;
      
    }