#include <iostream>
#include <stack>
using namespace std;

int main(){
    string original;
    getline(cin,original);
    
    string temp="" , ans="";
    stack<string> st;
    for(int i=0;i<original.size();i++){
        if(original[i]==' ' && temp!=""){
            st.push(temp);
            temp="";
        }
        else if((original[i]==' ') && temp==""){
            continue;
        }
        else{
            temp+=original[i];
        }
    }
    if(temp!="") {
        st.push(temp);
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
        if(!st.empty()){
            ans+=" ";
        }
    }
    cout<<ans;
}