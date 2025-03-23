#include <iostream>
using namespace std;



void nToOne(int i , int n){
    if(i>=n){
        return;
    }
    nToOne(++i , n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    int i=0;
    nToOne(i , n);
}