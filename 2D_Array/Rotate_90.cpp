#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    vector<vector<int>> matrix;
   matrix[3][3] = {{1,2,3} , {2,4,5},  {7,5,4}};
        vector<vector<int>> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        int colstart = 0;
        int endrow = row-1;
        int count=0;
        while(count<total){
            for(int j=0;j<=endrow;j++){
                ans[j][colstart++] = matrix[endrow--][j];
                count++;
            }
            
        }
         for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j];
        }
    }
        
}
