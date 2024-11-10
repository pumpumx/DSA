#include <iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int arr[n];
    int ar[6];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        if(ans==0){
            ar[i]=ans;
            cout<<ans<<endl;
        }
    }
     for(int i=0;i<n;i++){
        cout<<ar[i];
    }
}