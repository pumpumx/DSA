#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


void permutation(string str , vector<string> &ans , int index){
    if(index>=str.size()){
        ans.push_back(str);
        return;
    }
    for(int j=index;j<str.size();j++){
        swap(str[index],str[j]);
        permutation(str,ans,index+1);
        swap(str[index],str[j]); //Backtrack
    }
}
int main(){
    string str;
    getline(cin,str);
    vector<string> ans;
    int index =0;
    permutation(str,ans,index);
    for(auto num:ans){
        cout<<num<<" ";
    }
}