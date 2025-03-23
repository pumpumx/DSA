#include <iostream>
#include <vector>
using namespace std;

bool adjacentDigitSum(int a , int b){
    //function to return if two digits are adjacent or not
    if((a +1 -b)>=0 && (a +1-b)%9==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    vector<bool> v;
    while(t--){
        int a , b;
        cin>>a>>b;
        bool ans = adjacentDigitSum(a,b);
        v.push_back(ans);
    }
    for(const auto& num : v){
        if(num==true){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
}