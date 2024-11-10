#include <iostream>
using namespace std;
int fact(int n){
    int fact1=1;
    for(int i=1;i<=n;i++){
        fact1 = fact1*i;
    }
    return fact1;
}
int ncr(int n , int r){
    int ans;
    ans = (fact(n))/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}