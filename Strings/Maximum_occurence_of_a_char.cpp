#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    char ans;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        int count1=0,count2;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]){
                count1+=1;  
            }
        }
        if(count1==count2){
            ans = ans;
        }
        else if(count1>count2){
            ans=s[i];
        }
        count2=count1;
        count1=0;
    }
    cout<<ans;
}