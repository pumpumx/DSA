#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numsSize,target,element1,element2;
    cin>>numsSize>>target;
    int arr[numsSize];
    for(int i=0;i<numsSize;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     int ans = target-arr[i];
    //     if(ans<=0){
    //         continue;
    //     }
    //     if(target-arr[i]>0){
    //         element1 = i;
    //         for(int j=0;j<n;j++){
    //             if(arr[j]==ans){
    //                 element2 = j;
    //             }
    //         }
    //     }
    // }
    // cout<<element1<<" "<<element2;
     int s[numsSize];
     for(int i=0;i<numsSize;i++){
        int ans = target-arr[i];
        if(ans<=0){
            continue;
        }
        if(target-arr[i]>0){
            s[0] = i;
            for(int j=0;j<numsSize;j++){
                if(arr[j]==ans){
                    s[1] = j;
              }
            }
        }
    }
    cout<<s[0]<<s[1];
}