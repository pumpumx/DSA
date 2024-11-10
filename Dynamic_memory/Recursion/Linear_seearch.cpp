#include <iostream>
using namespace std;

bool search(int *arr,int n,int key){
    if(n==0){
        return 0;
    }
    if(key==arr[0]){
        return 1;
    }
    else{
        search(arr+1,n-1,key);
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

    if(search(arr,n,key)){
        cout<<"Present";
    }
    else{
        cout<<"absent";
    }
}