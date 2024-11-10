#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Babbar"; 
    int n = s.size();
    for(int i=0;i<n;i++){
        int temp = s[i];
        s[i] = s[n-1];
        s[n-1]=temp;
        n--;
    }
    cout<<s;
}