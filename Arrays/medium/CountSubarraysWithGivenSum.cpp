/*
Problem: count subarray with given sum

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class solution{
    public:
        int subarraySum(vector<int> &nums,int k){
            int presum=0,cnt=0;
            map<int,int> mpp;
            mpp[0]=1;
            for(int i=0;i<nums.size();i++){
                presum+=nums[i];
                int remove=presum-k;
                cnt +=mpp[remove];
                mpp[presum]+=1;
            }
            return cnt;

        }
};