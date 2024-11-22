#include <iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e ,int key){
    if(s>e){
        return false;
    }
    int mid = (s+e)/2;

    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
         binarysearch(arr,mid+1,e,key);
    }
    else{
        binarysearch(arr,s,mid-1,key);
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int s=0 , e=n-1;
    if(binarysearch(arr,s,e,key)){
        cout<<"Present";
    }
    else{
        cout<<"absent";
    }
}