#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int element1,element2;
        vector<int> s;
         int count=0;
         for(int i=0;i<nums.size();i++){
        int ans = target-nums[i];
        if(ans<=0){
            continue;
        }
        if(ans>=0){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==ans){
                    s.push_back(i);
                    s.push_back(j);
                    count+=1;
                    break;
              }
            }
        }
        if(count==1){
            break;
        }
    }
    return s;
}
};