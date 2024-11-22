#include<iostream>

using namespace std;

bool sorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }  
    else{
        bool ans = sorted(arr+1,n-1);
        return ans;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(sorted(arr,n)==1){
        cout<<"sorted";
    }
    else{
        cout<<"Not sorted";
    }
}