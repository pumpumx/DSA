#include <iostream>
#include <strings.h>
#include <algorithm>
using namespace std;


void reverse(string &str , int i , int n){
    if(i>n){
        return;
    }
    swap(str[i],str[n]);
    i++;
    n--;
    reverse(str,i,n);
}


int main(){
    string str;
    getline(cin,str);
    int i=0;
    int n = str.size()-1;
    reverse(str,i,n);
    cout<<str;
}