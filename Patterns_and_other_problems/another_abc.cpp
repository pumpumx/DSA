#include <iostream>

using namespace std;

int main(){
    int n,out=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch = 'A' +j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch = 'A' +out;
            cout<<ch<<" ";
            out+=1;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int no = i;
        for(int j=0;j<n;j++){
            char ch = 'A'+no;
            cout<<ch<<" ";
            no+=1;
        }
        cout<<endl;
    }
}