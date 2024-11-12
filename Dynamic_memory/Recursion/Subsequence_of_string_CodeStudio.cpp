#include <iostream>
#include <vector>
using namespace std;

void solve(string s , string output , vector<string> &ans , int index){
    if(index>=s.size()){
        if(output==""){
            return; 
        }
        else{
            ans.push_back(output);
            return;
        }
    }
        //exclude
        solve(s , output , ans , index+1);

        //include
        output.push_back(s[index]);
        solve(s , output , ans , index+1);
}
int main(){
    string s;
    getline(cin , s);
    
    vector<string> ans;
    string output;
    int index=0;

    solve(s , output , ans , index);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}