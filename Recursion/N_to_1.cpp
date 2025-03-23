#include <iostream>

using namespace std;

void nToOne(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    nToOne(n-1);
}

int main(){
    int n;
    cin>>n;
    nToOne(n);
}