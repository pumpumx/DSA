#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        int out =i;
        for(int j=1;j<i+1;j++){
           cout<<out;
           out-=1;
        }
        cout<<endl;
    }
}