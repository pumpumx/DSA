#include <iostream>
using namespace std;

int main(){
    int n,target,count=0;
    cin>>n>>target;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            count=1;
            cout<<mid;
        }
        if(target>arr[mid]){
            start = mid + 1;
        }
        else{
            end= mid - 1;
        }
        mid = (start+end)/2;
    }
    if(count==0){
    cout<<"Element Not Present "<<-1;
    }
}