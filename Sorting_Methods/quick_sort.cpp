#include <iostream>
#include <vector>
using namespace std;


void quickSort(vector<int> &arr){

};
int main(){
    vector<int> arr(6);
    int a;   
    for(int i=0;i<arr.size();i++){
        cin>>a;
        arr.push_back(a);
    }

    quickSort(arr);
}