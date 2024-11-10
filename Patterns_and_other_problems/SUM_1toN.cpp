#include <iostream>

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n+1;i++){
        sum+=i;
    }
    cout<<sum;
}