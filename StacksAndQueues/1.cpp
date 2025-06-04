#include <iostream>
using namespace std;


class Stack{
    private:
        int arr[100];
        int currSize = 0;
        int top = -1;
    public: 
        void push(int x){
            arr[currSize] = x;
            top = currSize;
            currSize++;
        }
        void pop(){
            int p * = arr[currSize];
            arr[currSize]--;
            top = currSize;
            delete p;
        }
        int size(){
            return currSize; 
        }
        int top(){
            return top; 
        }
        

}
int main(){ //Implementing stack using array

    int stack = new Stack()


}