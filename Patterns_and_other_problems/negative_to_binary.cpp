#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,digit,ans=0,temp,second,third;
    cin>>n;
    int i=0;
    if(n<0){
        n = n*(-1);
        while(n!=0){
        digit = n&1;
        ans = digit*pow(10,i) + ans;
        n = n>>1;
        i++;
        }
    }
    n = ~ans;
    temp = n&1;
    cout<<temp;
}