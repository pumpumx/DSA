#include <iostream>

using namespace std;

int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;

    pow(a,b);
}