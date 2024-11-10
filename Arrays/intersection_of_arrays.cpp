#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
     cin>>a>>b;
    int arr[a],ar[b];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        cin>>ar[i];
    }
    vector<int> ans;

    for(int i=0;i<a;i++){
        int element = arr[i];
        for(int j=0;j<b;j++){
            if(arr[i]==ar[j]){
                ans.push_back(element);
                arr[j]=-2;
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}