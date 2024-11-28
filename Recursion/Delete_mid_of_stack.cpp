#include <bits/stdc++.h> 
using namespace std;

void deleteMiddle(stack<int>&inputStack, int N){
	
   int mid = N/2;
   stack<int>s2;
   int i=0;
   while(i<=mid){
      s2.push(inputStack.top());
      inputStack.pop();
      i++;
   }
   s2.pop();
   int j=0;
   while(j<mid){
      inputStack.push(s2.top());
      s2.pop();
      j++;
   }
}

void Display(stack<int> s , int count){
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }


}
int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    int n1  = s.size();
    deleteMiddle(s , n1);
    int count=0;
    Display(s,count);
}