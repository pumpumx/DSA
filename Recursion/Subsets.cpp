#include <iostream>
#include <vector>
using namespace std;



void solve(vector<int>nums , vector<int> output , int index , vector<vector<int>> & ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    //exclude 
    solve(nums , output , index+1 , ans);

    //include
    int element =nums[index];
    output.push_back(element);
    solve(nums , output , index+1 , ans);
}
int main(){  //Exclude / Include game
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(arr,output,index , ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
    } 
    cout<<" ";
    }

    
}   