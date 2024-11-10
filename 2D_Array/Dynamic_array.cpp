#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    //Creation done

    for(int i=0;i<n;i++){  //taking input
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){ //output
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int arr[] = {1,2,3,4,5};
    int i=0;
        while(arr[i]!=0){
            cout<<arr[i];
            i++;
    }
}