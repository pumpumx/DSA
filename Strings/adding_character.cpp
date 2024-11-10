#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "naaz the manhas ok ok ok";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            continue;
        }
        else{
            s[i]+='@';
            s[i]+='4';
            s[i]+='0';
        }
    }
    cout<<s;
}