#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,bit,ans=0;
    cin>>n;
    int i=0;
    while(n!=0){
        bit = n&1;
        ans =  bit*pow(10,i) + ans;
        n = n>>1; 
        i++;
    }
    cout<<ans;

}
