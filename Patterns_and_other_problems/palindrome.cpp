#include <iostream>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0 , e=n-1;
    while(s<e){
        if(arr[s]==arr[e]){
            s++;
            e--;
            continue;
        }
        else{
            cout<<"Not a Palindrome";
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"A Palindrome";
    }
}