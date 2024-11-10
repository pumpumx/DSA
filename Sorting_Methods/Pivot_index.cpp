#include <iostream>
using namespace std;
    int main() {
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int s=0 ,e=n-1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid+1;
            }
            else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
       
    }