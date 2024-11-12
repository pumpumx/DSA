#include <iostream>
#include <queue>
using namespace std;

int main(){
 priority_queue<int> pq; //This is a max heap;

 priority_queue<int , vector<int> , greater<int>> minheap; //This is a minheap

 //for ex: 
    pq.push(10);
    pq.push(50);
    pq.push(60);
    pq.push(66);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
cout<<endl;
    //For min heap
    minheap.push(50);
    minheap.push(60);
    minheap.push(66);
    minheap.push(10);

    while(!minheap.empty()){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
}