#include <iostream>
using namespace std;

class heap{  //Implementaion using array; //Node -> ith index
                                //Left child -> 2*i index
                                //Right child -> 2*i + 1;
                                //Parent -> i/2;
     public: 
     int arr[100];
     int size;

     heap(){
        arr[0] = -1;
        size =0;
     }
     void insert(int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent] , arr[index]);
            }
            else{
                return;
            }
        }
     }   
     void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }                       
};

void insertion(){

}
int main(){  //Heap - a complete binary tree that comes with heap order property. 
                //CBT - every level is completely filled except the last level  
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(54);            //Nodes always added form the left      
    h.print(); //Max heap : Every value of child is smaller  than parent
                //MIN heap : Every value of child is greater than parent. 
}