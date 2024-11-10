#include <iostream>

using namespace std;
int main(){
    int number,n,count=0;
    cin>>number>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(number==arr[i]){
            count=1;
        }
    }
    if(count==1){
        cout<<"Number Present";
    }
    else{
        cout<<"Number not present";
    }
}