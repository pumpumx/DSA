#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        char ch = 'D';
        ch -=i;
     for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}