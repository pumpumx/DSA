#include <iostream>
#include <vector>
using namespace std;

int main(){
     int n,s=0;
    int min=INT_MAX;
    int sell=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            
        }else if(arr[i]-min>sell){
            sell = arr[i]-min;
        }
        return sell;
    }
}

