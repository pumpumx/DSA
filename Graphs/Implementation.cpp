#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matrix(3,vector<int> (3,0));

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            
            cout<<"is Node "<<i<<" "<<"connected to node "<<j<<"? "<<endl<<"If yes enter 1 otherwise enter 0: ";
            int a;
            cin>>a;
            if(a==1){
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}