#include <iostream>
using namespace std;

int main(){
    int n,m;
    int count =0;
    cin>>n>>m;
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count+=arr[i][j];
        }
        cout<<count<<endl;
        count=0;
    }
}