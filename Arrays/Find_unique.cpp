#include <iostream>
using namespace std;

int main(){
     int n,unique=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        unique = unique^arr[i];
    }
    cout<<unique;
}