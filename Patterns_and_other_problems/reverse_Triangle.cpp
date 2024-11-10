#include <iostream>

using namespace  std;

int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n+1;j++){
            int out = n-i-1;
            if(j>i){
                cout<<i+1;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}