#include <iostream>

using namespace std;

int main(){
    int n,isPrime=1;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime =0;
            break;
        }
    }
    if(isPrime=0){
        cout<<"Not a Prime";
    }
    else{
        cout<<"A Prime";
    }
}