#include <iostream>
using namespace std;

int main(){
    int n,target,sum;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
                i++;
            }
        }
    }
}