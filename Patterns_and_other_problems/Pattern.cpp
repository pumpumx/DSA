#include <iostream>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<1;i++){
        for(int j=1;j<10;j++){
            if(j%3==0){
                cout<<j<<endl;
            }
            else{
                cout<<j;
            }
        }        
    }
}