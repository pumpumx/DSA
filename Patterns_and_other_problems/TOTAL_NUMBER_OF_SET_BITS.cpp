#include <iostream>

using namespace std;
int setbit(int n){
    int count =0,bit;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin >>a>>b;
    cout<<setbit(a) +setbit(b); 
}