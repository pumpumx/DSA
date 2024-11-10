#include <iostream>
using namespace std;

int main(){
    int n,target,count=0,ans;
    cin>>n>>target;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int mid=(start+end)/2;
    while(start<=end){  
        if(arr[mid]==target){
            end = end-1; //First Occurence;
        }
        if(target>arr[mid]){
            start = mid + 1;
        }
        else{
            end= mid - 1;
        }
        mid = (start+end)/2;
    }
        cout<<"First Occurence is at index "<<mid;

         start=0,end=n-1;
    int mid=(start+end)/2;
     while(start<=end){  
        if(arr[mid]==target){
            start=start-1; //Last Occurence;
        }
        if(target>arr[mid]){
            start = mid + 1;
        }
        else{
            end= mid - 1;
        }
        mid = (start+end)/2;
    }
    cout<<"Last Occcurence is at index "<<mid;
    if(count==0){
    cout<<"Element Not Present "<<-1;
    }

}