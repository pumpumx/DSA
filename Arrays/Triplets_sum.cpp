#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            j++;
            for(int k=i+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    ans.push_back(arr[i]); 
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                    ans.shrink_to_fit();
                    k++;
                }
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        if(i%3==0){
            cout<<endl;
        }
        cout<<ans[i]<<" ";
    }
}