#include <iostream>

using namespace std;

int once(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    return result;
}
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<once(arr,n);
}