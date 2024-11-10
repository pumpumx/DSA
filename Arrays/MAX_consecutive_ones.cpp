#include <iostream>

using namespace std;


int maxones(int arr[],int n){
    int count=0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>maxi){
            maxi=count;
            }
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxones(arr,n)<<endl;
}