#include <iostream>
#include <vector>
#include <stack>

using namespace std;


void pushAtBottom(stack<int>&myStack , int x){
 if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int temp = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);
    myStack.push(temp);
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
    int n1;
    cin>>n1;
    stack<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    pushAtBottom(s , n1);
    int count=0;
    Display(s,count);
}